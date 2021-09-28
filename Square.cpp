#include <iostream>
#include "square.h"

using namespace std;

void Square::set_length(double x1, double y1, double length)
{
	if (length > 0)
	{
		this->x1 = x1;
		this->y1 = y1;
		this->length = length;
	}
	else
	{
		throw invalid_argument("ƒлина меньше 0 или равна ему");
	}
}

Square::Square(double x1, double y1, double length)
{
	set_length(x1, y1, length);
}


	
double Square::get_vortex_x1() { return x1; }
double Square::get_vortex_x2() { return x1 + length; }
double Square::get_vortex_x3() { return x1 + length; }
double Square::get_vortex_x4() { return x1; }

double Square::get_vortex_y1() { return y1; }
double Square::get_vortex_y2() { return y1; }
double Square::get_vortex_y3() { return y1 - length; }
double Square::get_vortex_y4() { return y1 - length; }

double Square::get_changed_coordinates_x1(double change_of_coordinate) { return x1 + change_of_coordinate; }
double Square::get_changed_coordinates_x2(double change_of_coordinate) { return x1 + change_of_coordinate + length; }
double Square::get_changed_coordinates_x3(double change_of_coordinate) { return x1 + change_of_coordinate + length; }
double Square::get_changed_coordinates_x4(double change_of_coordinate) { return x1 + change_of_coordinate; }

double Square::get_changed_coordinates_y1(double change_of_coordinate) { return y1 + change_of_coordinate; }
double Square::get_changed_coordinates_y2(double change_of_coordinate) { return y1 + change_of_coordinate; }
double Square::get_changed_coordinates_y3(double change_of_coordinate) { return y1 + change_of_coordinate - length; }
double Square::get_changed_coordinates_y4(double change_of_coordinate) { return y1 + change_of_coordinate - length; }

double Square::get_perimeter() { return length * 4; }

double Square::get_square() { return length * length; }

double Square::get_rotated_x1(){ return x1 + length; }
double Square::get_rotated_x2() { return x1 + length; }
double Square::get_rotated_x3() { return x1; }
double Square::get_rotated_x4() { return x1; }

double Square::get_rotated_y1() { return y1 - length; }
double Square::get_rotated_y2() { return y1 - length; }
double Square::get_rotated_y3() { return y1; }
double Square::get_rotated_y4() { return y1; }

std::ostream& operator<<(std::ostream& out, Square& F)
{
	return out << F.get_vortex_x1() << " | " << F.get_vortex_x2() << " | " << F.get_vortex_x3() << " | " << F.get_vortex_x4();
	return out << F.get_vortex_y1() << " | " << F.get_vortex_y2() << " | " << F.get_vortex_y3() << " | " << F.get_vortex_y4();

}