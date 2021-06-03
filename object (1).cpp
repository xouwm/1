#include <iostream>
#include <windows.h>
#include <cmath>
class Progression { //a1 - первый член, d - разность/знаменатель (для арифметической и геометрической соответственно)
	int64_t a1, d;
public:
	Progression(int64_t a1, int64_t d) {
		this->a1 = a1;
		this->d = d;
	}
	virtual void display() = 0; //абстрактный метод
	virtual int64_t calc(int64_t index) = 0; //еще один абстрактный метод
	virtual int64_t sum(int64_t n) = 0; //и еще один абстрактный метод
	int64_t getA() const { return a1; }
	int64_t getD() const { return d; }
};
class Arithmetic : public Progression {
public:
	Arithmetic(int64_t a1, int64_t d) : Progression(a1,d) {}
	virtual void display() override { //вывод информации о прогрессии
		std::cout << "Первый член = " << getA() << std::endl;
		std::cout << "Разность прогрессии = " << getD() << std::endl;
	}
	virtual int64_t calc(int64_t index) override { //n-ый элемент
		return getA() + ((index-1) * getD());
	}
	virtual int64_t sum(int64_t n) override { //сумма первых n элементов
		return (n * (getA() + calc(n))) / 2;
	}
};
class Geometrical : public Progression {
public:
	Geometrical(int64_t a1, int64_t q) : Progression(a1, q) {}
	virtual void display() override {
		std::cout << "Первый член = " << getA() << std::endl;
		std::cout << "Знаменатель прогрессии = " << getD() << std::endl;
	}
	virtual int64_t calc(int64_t index) override {
		return getA() * pow(getD(), index - 1);
	}
	virtual int64_t sum(int64_t n) override {
		int64_t result = calc(n) * getD() - getA();
		return result / (getD() - 1);
	}
};
int main() {
	SetConsoleOutputCP(1251);
	Progression* pr = nullptr;
	char choice;
	std::cout << "Хотите использовать арифметическую прогрессию? (y/n): "; std::cin >> choice; //если y - создается указатель на арифметическую прогрессию. Иначе на геометрическую.
	switch (choice) {
	case 'y':
		pr = new Arithmetic(3,3);
		break;
	case 'n':
		pr = new Geometrical(3, 2);
		break;
	default:
		std::cout << "Такого варианта не существует" << std::endl;
		exit(-1);
	}
	pr->display();
	int64_t index;
	std::cout << "Введите желаемый номер элемента прогрессии "; std::cin >> index;
	std::cout << "Этот элемент равен " << pr->calc(index) << std::endl;
	std::cout << "Введите n для получения суммы первых n элементов прогрессии "; std::cin >> index;
	std::cout << "Сумма первых " << index << " элементов равна " << pr->sum(index) << std::endl;
}