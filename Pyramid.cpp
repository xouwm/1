#include "Pyramid.h"
#include <cmath>
#include <stdexcept>

Pyramid::Pyramid(const double a, const double b, const double height)
{
	set_a(a);
	set_b(b);
	set_height(height);
}

void Pyramid::set_a(const double a)
{
	if (a > 0)
	{
		this->a = a;
	}
	else
	{
		throw std::invalid_argument("сторона a меньше или равна 0");
	}
}

void Pyramid::set_b(const double b)
{
	if (b > 0)
	{
		this->b = b;
	}
	else
	{
		throw std::invalid_argument("сторона b меньше или равна 0");
	}
}

void Pyramid::set_height(const double height)
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

double Pyramid::get_volume()
{
	return ((1.0 / 3.0) * height * a * a);
}

double Pyramid::get_surface_area()
{
	return a * a + 2 * a * sqrt(b * b - ((a * a) / (4)));
}
