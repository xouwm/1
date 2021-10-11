#include <iostream>
#include "square.h"

using namespace std;

void Square::set_length(const double length)
{
	if (length > 0)
	{
		this->length = length;
	}
	else
	{
		throw invalid_argument("длина меньше 0 или равна ему");
	}
}

void Square::set_x1(const double x1)
{
	this->x1 = x1;
}

void Square::set_y1(const double y1)
{
	this->y1 = y1;
}

Square::Square(const double x1, const double y1, const double length)
{
	set_x1(x1);
	set_y1(y1);
	set_length(length);
}


const double Square::get_vortex_x1() { return x1; }
const double Square::get_vortex_x2() { return x1 + length; }
const double Square::get_vortex_x3() { return x1 + length; }
const double Square::get_vortex_x4() { return x1; }

const double Square::get_vortex_y1() { return y1; }
const double Square::get_vortex_y2() { return y1; }
const double Square::get_vortex_y3() { return y1 - length; }
const double Square::get_vortex_y4() { return y1 - length; }

void Square::change_length(const double length) { set_length(length); }

void Square::change_x1(const double x1) { set_x1(x1); }
void Square::change_x2(const double x2) { set_x1(x2 - length); }
void Square::change_x3(const double x3) { set_x1(x3 - length); }
void Square::change_x4(const double x4) { set_x1(x4); }

void Square::change_y1(const double y1) { set_y1(y1); }
void Square::change_y2(const double y2) { set_y1(y2); }
void Square::change_y3(const double y3) { set_y1(y3 + length); }
void Square::change_y4(const double y4) { set_y1(y4 + length); }

const double Square::get_perimeter() { return length * 4; }
const double Square::get_square() { return length * length; }

const double Square::get_rotated_x1() { return x1 + length; }
const double Square::get_rotated_x2() { return x1 + length; }
const double Square::get_rotated_x3() { return x1; }
const double Square::get_rotated_x4() { return x1; }

const double Square::get_rotated_y1() { return y1 - length; }
const double Square::get_rotated_y2() { return y1 - length; }
const double Square::get_rotated_y3() { return y1; }
const double Square::get_rotated_y4() { return y1; }

std::ostream& operator<<(std::ostream& out, Square& F)
{
	return out << F.get_vortex_x1() << " | " << F.get_vortex_x2() << " | " << F.get_vortex_x3() << " | " << F.get_vortex_x4();
	return out << F.get_vortex_y1() << " | " << F.get_vortex_y2() << " | " << F.get_vortex_y3() << " | " << F.get_vortex_y4();

}