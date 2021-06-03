#include <iostream>
#include <windows.h>
class Triad {
	int64_t dig1, dig2, dig3;
public:
	Triad(int64_t d1 , int64_t d2, int64_t d3) {
		dig1 = d1; dig2 = d2; dig3 = d3;
	}
	bool operator>(Triad& tr) {
		if (dig1 > tr.dig1) return true;
		else if (dig1 == tr.dig1 && dig2 > tr.dig2) return true;
		else if (dig1 == tr.dig1 && dig2 == tr.dig2 && dig3 > tr.dig3) return true;
		return false;
	}
	bool operator==(Triad& tr) {
		return dig1 == tr.dig1 && dig2 == tr.dig2 && dig3 == tr.dig3;
	}
	bool operator<(Triad& tr) {
		if (dig1 < tr.dig1) return true;
		else if (dig1 == tr.dig1 && dig2 < tr.dig2) return true;
		else if (dig1 == tr.dig1 && dig2 == tr.dig2 && dig3 < tr.dig3) return true;
		return false;
	}
	int64_t getDig1() const { return dig1; }
	int64_t getDig2() const { return dig2; }
	int64_t getDig3() const { return dig3; }
	void setDig1(int64_t d) { dig1 = d; }
	void setDig2(int64_t d) { dig2 = d; }
	void setDig3(int64_t d) { dig3 = d; }
	void display() {
		std::cout <<'('<< dig1 << ';' << dig2 << ';' << dig3 <<')'<< std::endl;
	}
	void operator=(const Triad& tr) {
		dig1 = tr.dig1;
		dig2 = tr.dig2;
		dig3 = tr.dig3;
	}
};
class Date : public Triad {
public:
	Date(int64_t y, int64_t m, int64_t d) : Triad(y, m, d) {
		if (y < 0 || m < 1 || d < 1 || m>12 || d>30) {
			std::cout << "Ошибка: такое число не может являться датой" << std::endl;
			exit(-1);
		}
	}
	void setDig1(int64_t y) {
		if (y < 0) {
			std::cout << "Ошибка: год не может быть меньше 0" << std::endl;
			exit(-1);
		}
		Triad::setDig1(y);
	}
	void setDig2(int64_t m) {
		if (m < 1 || m>12) {
			std::cout << "Ошибка: месяц не может быть меньше 1 или больше 12" << std::endl;
			exit(-1);
		}
		Triad::setDig2(m);
	}
	void setDig3(int64_t d) {
		if (d < 1 || d>30) {
			std::cout << "Ошибка: день не может быть меньше 1 или больше 30" << std::endl;
			exit(-1);
		}
		Triad::setDig3(d);
	}
	void display() {
		std::cout << getDig1() << ':' << getDig2() << ':' << getDig3() << std::endl;
	}
};
int main() {
	SetConsoleOutputCP(1251);
	Triad tr1(3, 7, 1), tr2(3, 5, 10);
	Date date1(2021, 12, 1), date2(2020, 1, 1);
	tr1.display();
	std::cout << "Получение полей этого объекта: " << tr1.getDig1() << ' ' << tr1.getDig2() << ' ' << tr1.getDig3() << std::endl;
	std::cout << "Изменение полей объекта с помощью метода set" << std::endl;
	tr1.setDig1(rand()%100);
	tr1.setDig2(rand()%100);
	tr1.setDig3(rand()%100);
	tr1.display();
	std::cout << "Второй объект класса Triad" << std::endl;
	tr2.display();
	if (tr1 > tr2) {
		std::cout << "Первая тройка чисел больше второй" << std::endl;
	}
	else if (tr1 == tr2) {
		std::cout << "Тройки чисел равны" << std::endl;
	}
	else if (tr1 < tr2) {
		std::cout << "Вторая тройка чисел меньше первой" << std::endl;
	}

	date1.display();
	std::cout << "Получение полей этого объекта: " << date1.getDig1() << ' ' << date1.getDig2() << ' ' << date1.getDig3() << std::endl;
	std::cout << "Изменение полей объекта с помощью метода set" << std::endl;
	date1.setDig1(rand()%2021);
	date1.setDig2(3);
	date1.setDig3(27);
	date1.display();
	std::cout << "Второй объект класса Date" << std::endl;
	date2.display();
	if (date1 > date2) {
		std::cout << "Первая дата больше второй" << std::endl;
	}
	else if (date1 == date2) {
		std::cout << "Даты равны" << std::endl;
	}
	else if (date1 < date2) {
		std::cout << "Вторая дата больше первой" << std::endl;
	}
	std::cout << "Объект базового класса до и после изменения" << std::endl;
	tr1.display();
	tr1 = date1;
	tr1.display();
}