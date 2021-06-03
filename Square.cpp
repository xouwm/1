#include <iostream>
#include "Square.h"
using namespace std;
Square::Square(double upper_left_corner_x, double upper_left_corner_y, double length)
{
	this->upper_left_corner_x = upper_left_corner_x;
	this->upper_left_corner_y = upper_left_corner_y;
	set_length(length);
}
Square::Square(double side)
{
	set_length(side);
	upper_left_corner_x = 0;
	upper_left_corner_y = side;
}
void Square::set_length(double length)
{
	if (length > 0)
	{
		this->length = length;
	}
	else
	{
		throw invalid_argument("ƒлина должна быть больше нул¤");
	}
}
void Square::set_upper_left_corner_x(double x)
{
	upper_left_corner_x = x;
}
void Square::set_upper_left_corner_y(double y)
{
	upper_left_corner_y = y;
}
void Square::set_new_length(double length)
{
	set_length(length);
}
double Square::get_perimeter()
{
	return length * 4;
}
double Square::get_area()
{
	return length * length;
}
ostream& operator<<(ostream& out, const Square& sq) 
{ 
	out << "x1 = " << sq.upper_left_corner_x << endl
	<< "y1 = " << sq.upper_left_corner_y << endl
	<< "x2 = " << sq.upper_left_corner_x + sq.length << endl
	<< "y2 = " << sq.upper_left_corner_y << endl
	<< "x3 = " << sq.upper_left_corner_x + sq.length << endl
	<< "y3 = " << sq.upper_left_corner_y - sq.length << endl
	<< "x4 = " << sq.upper_left_corner_x << endl
	<< "y4 = " << sq.upper_left_corner_y - sq.length << endl << endl;
	return out;
}