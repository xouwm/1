#include<cmath>
#include "Cone.h"
#include <stdexcept>


Cone::Cone(const double height, const double radius)
{
	set_height(height);
	set_radius(radius);
}

void Cone::set_height(const double height)
{
	if (height > 0)
	{
		this->height = height;
	}
	else
	{
		throw std::invalid_argument("высота меньше или равна 0");
	}
}

void Cone::set_radius(const double radius)
{
	if (radius > 0)
	{
		this->radius = radius;
	}
	else
	{
		throw std::invalid_argument("радиус меньше или равен 0");
	}
}

double Cone::get_volume()
{
	return ((1.0 / 3.0) * M_PI * radius * radius * height);
}

double Cone::get_surface_area()
{
	double l = sqrt(radius * radius + height * height);
	double s = M_PI * radius * (radius + l);
	return s;
}