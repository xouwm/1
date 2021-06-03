#include <iostream>
#include "Square.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Square s(0, 0, 5);
	cout << s.get_perimeter() << endl;
	cout << s.get_area() << endl;
	cout << s;
}