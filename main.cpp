#include <iostream>
#include "square.h"
using namespace std;

int main()
{
	double x1, y1, length, length_change;
	setlocale(LC_ALL, "ru");
	cout << "введите кординату x для левого верхнего угла квадрата" << endl;
	cin >> x1;
	cout << "введите кординату y для левого верхнего угла квадрата" << endl;
	cin >> y1;
	cout << "введите длинну" << endl;
	cin >> length;
	cout << endl;

	Square a(x1, y1, length);

	cout << "координаты точки x1, y1:" << " (" << a.get_vortex_x1() << " ; " << a.get_vortex_y1() << ") " << endl;
	cout << "координаты точки x2, y2:" << " (" << a.get_vortex_x2() << " ; " << a.get_vortex_y2() << ") " << endl;
	cout << "координаты точки x3, y3:" << " (" << a.get_vortex_x3() << " ; " << a.get_vortex_y3() << ") " << endl;
	cout << "координаты точки x4, y4:" << " (" << a.get_vortex_x4() << " ; " << a.get_vortex_y4() << ") " << endl << endl << endl;

	// Пример изменения координаты
	double new_x2, new_y2;

	cout << "введите новое значение для x2: " << endl;
	cin >> new_x2;
	a.change_x2(new_x2);

	cout << "введите новое значение для y2: " << endl;
	cin >> new_y2;
	a.change_y2(new_y2);

	cout << "координаты x1, y1 после изменения x2, y2:" << " (" << a.get_vortex_x1() << " ; " << a.get_vortex_y1() << ") " << endl;


	cout << "поворот вершин квадрата производится на 90 градусов: " << endl << endl;

	cout << "координаты точки x1, y1 при повороте на 90 градусов " << " (" << a.get_rotated_x1() << " ; " << a.get_rotated_y1() << ") " << endl;
	cout << "координаты точки x2, y2 при повороте на 90 градусов " << " (" << a.get_rotated_x2() << " ; " << a.get_rotated_y2() << ") " << endl;
	cout << "координаты точки x3, y3 при повороте на 90 градусов " << " (" << a.get_rotated_x3() << " ; " << a.get_rotated_y3() << ") " << endl;
	cout << "координаты точки x4, y4 при повороте на 90 градусов " << " (" << a.get_rotated_x4() << " ; " << a.get_rotated_y4() << ") " << endl << endl;


	cout << "Периметр равен = " << a.get_perimeter() << endl << endl;

	cout << "Площадь равна = " << a.get_square() << endl;


	return 0;
}
