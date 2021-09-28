#include <iostream>
#include "square.h"
using namespace std;

int main()
{
	double x1, y1, length, length_change, change_of_coordinate;
	setlocale(LC_ALL, "ru");
	cout << "введите кординату x для левого верхнего угла квадрата" << endl;
	cin >> x1;
	cout << "введите кординату y для левого верхнего угла квадрата" << endl;
	cin >> y1;
	cout << "введите длинну" << endl;
	cin >> length;
	cout << "введите изменение координат" << endl;
	cin >> change_of_coordinate;
	cout << endl;

	Square a(x1, y1, length);

	cout << "координаты точки x1, y1:" << " (" << a.get_vortex_x1() << " ; " << a.get_vortex_y1() << ") " << endl;
	cout << "координаты точки x2, y2:" << " (" << a.get_vortex_x2() << " ; " << a.get_vortex_y2() << ") " << endl;
	cout << "координаты точки x3, y3:" << " (" << a.get_vortex_x3() << " ; " << a.get_vortex_y3() << ") " << endl;
	cout << "координаты точки x4, y4:" << " (" << a.get_vortex_x4() << " ; " << a.get_vortex_y4() << ") " << endl << endl << endl;

	cout << "изменение (перемещение) координат = " << change_of_coordinate << endl << endl;

	cout << "координаты точки x1, y1 с изменением координат: " << " (" << a.get_changed_coordinates_x1(change_of_coordinate) << " ; " << a.get_changed_coordinates_y1(change_of_coordinate) << ") " << endl;
	cout << "координаты точки x2, y2 с изменением координат: " << " (" << a.get_changed_coordinates_x2(change_of_coordinate) << " ; " << a.get_changed_coordinates_y2(change_of_coordinate) << ") " << endl;
	cout << "координаты точки x3, y3 с изменением координат: " << " (" << a.get_changed_coordinates_x3(change_of_coordinate) << " ; " << a.get_changed_coordinates_y3(change_of_coordinate) << ") " << endl;
	cout << "координаты точки x4, y4 с изменением координат: " << " (" << a.get_changed_coordinates_x4(change_of_coordinate) << " ; " << a.get_changed_coordinates_y4(change_of_coordinate) << ") " << endl << endl;

	cout << "поворот вершин квадрата производится на 90 градусов: " << endl << endl;

	cout << "координаты точки x1, y1 при повороте на 90 градусов " << " (" << a.get_rotated_x1() << " ; " << a.get_rotated_y1() << ") " << endl;
	cout << "координаты точки x2, y2 при повороте на 90 градусов " << " (" << a.get_rotated_x2() << " ; " << a.get_rotated_y2() << ") " << endl;
	cout << "координаты точки x3, y3 при повороте на 90 градусов " << " (" << a.get_rotated_x3() << " ; " << a.get_rotated_y3() << ") " << endl;
	cout << "координаты точки x4, y4 при повороте на 90 градусов " << " (" << a.get_rotated_x4() << " ; " << a.get_rotated_y4() << ") " << endl << endl;


	cout << "Периметр равен = " << a.get_perimeter() << endl << endl;

	cout << "Площадь равна = " << a.get_square() << endl;


	return 0;
}
