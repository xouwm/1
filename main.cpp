#include <iostream>
#include <string>
#include "Date.h"
#include "Triad.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	Triad triad(a, b, c);
	cout << "a = " << triad.get_a() << endl << "b = " << triad.get_b() << endl << "c = " << triad.get_c() << endl;


	Date dateOne(12, 12, 2012);
	Date dateTwo(12, 12, 2013);
	cout << "Первая дата: " << endl << "день = " << dateOne.get_day() << endl << "месяц = " << dateOne.get_month() << endl << "год = " << dateOne.get_year() << endl;
	cout << "Вторая дата: " << endl << "день = " << dateTwo.get_day() << endl << "месяц = " << dateTwo.get_month() << endl << "год = " << dateTwo.get_year() << endl << endl;;
	cout << "Первая дата меньше второй: " << dateOne.is_less(dateTwo) << endl;
}