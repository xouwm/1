#include <iostream>
#include <windows.h>
#include <stdexcept>
#include <string>
using std::endl;
using std::to_string;
struct complex {
	float_t a, b;
	complex(float_t a1, float_t b1) : a{a1}, b{b1} {}
	void display() const {
		std::cout << '(' << a << ';' << b << ')' << endl;
	}
};
class empty {
public:
	std::string information() { return "Попытка разделить на ноль. Ошибка создана с помощью пустого класса"; }
};
class standartException : public std::exception {
	complex Complex;
public:
	standartException(const complex& c, const char* message) : std::exception(message), Complex{ c } {}
	virtual const char* what() const override { return std::exception::what(); }
	complex getComplex() const { return Complex; }
};
class divToZero {
	complex Complex;
	std::string message;
public:
	divToZero(const complex& c, std::string msg) : Complex{c}, message{msg} {}
	std::string what() const {
		return message;
	}
	complex getComplex() const { return Complex; }
};
complex div1(const complex& com1, const complex& com2) noexcept {
	complex result(0,0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0) {
		std::cout << "Попытка разделить на ноль" << endl;
		exit(-1);
	}
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}
complex div2(const complex& com1, const complex& com2) throw() {
	complex result(0, 0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0)
		throw("Попытка разделить на ноль");
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}
complex div3(const complex& com1, const complex& com2) throw (std::logic_error) {
	complex result(0, 0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0)
		throw std::logic_error("Попытка разделить на ноль");
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}
complex div4(const complex& com1, const complex& com2) throw (empty) {
	complex result(0, 0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0)
		throw empty();
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}
complex div5(const complex& com1, const complex& com2) throw (standartException) {
	complex result(0, 0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0)
		throw standartException(com1,"Попытка разделить на ноль");
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}
complex div6(const complex& com1, const complex& com2) throw (divToZero) {
	complex result(0, 0);
	float_t temp = (com2.a * com2.a + com2.b * com2.b);
	if (temp == 0)
		throw divToZero(com1, "Попытка разделить на ноль");
	result.a = (com1.a * com2.a + com1.b * com2.b) / temp;
	result.b = (com1.b * com2.a - com1.a * com2.b) / temp;
	return result;
}

int main() {
	SetConsoleOutputCP(1251);
	complex com1(30, 73), com2(14, 15), com3(0, 0);
	std::cout << "Используемые комплексные числа: " << endl;
	com1.display();
	com2.display();
	com3.display();

	std::cout << endl << "Деление чисел без использования спецификации исключений " << endl;
	complex res = div1(com1, com2);
	res.display();
	try {
		std::cout << endl << "Функция со спецификацией throw() " << endl;
		res = div2(com1, com2);
		res.display();
		res = div2(com1, com3);
		res.display();
	} catch (const char* err) {
		std::cerr << err << endl << endl;
	}
	try {
		std::cout << "Функция со спецификацией со стандартным исключением " << endl;
		res = div3(com1, com2);
		res.display();
		res = div3(com1, com3);
		res.display();
	} catch (std::logic_error& err) {
		std::cerr << err.what() << endl << endl;
	}
	try {
		std::cout << "Функция со спецификацией с пустым классом" << endl;
		res = div4(com1, com2);
		res.display();
		res = div4(com1, com3);
		res.display();

	} catch (empty& err) {
		std::cerr << err.information() << endl << endl;
	}
	try {
		std::cout << "Функция со спецификацией с наследником от стандартного исключения" << endl;
		res = div5(com1, com2);
		res.display();
		res = div5(com1, com3);
		res.display();
	} catch (standartException& err) {
		std::cerr << err.what() <<"\nПараметры объекта-делимого: ";
		err.getComplex().display();
		std::cout << endl;
	}
	try {
		std::cout << "Функция со спецификацией с собственно реализованным классом" << endl;
		res = div6(com1, com2);
		res.display();
		res = div6(com1, com3);
		res.display();
	} catch (divToZero& dtz) {
		std::cerr << dtz.what()<<"\nПараметры объекта-делимого: ";
		dtz.getComplex().display();
	}
}