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
	Triad one(a, b, c);
	cout << "день = " << one.get_a() << endl << "мес¤ц = " << one.get_b() << endl << "год = " << one.get_c() << endl;


	Date two(a, b, c);
	cout << "день = " << two.get_day() << endl << "мес¤ц = " << two.get_month() << endl << "год = " << two.get_year() << endl;


}