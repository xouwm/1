#include "Sphere.h"
#include <stdexcept>

Sphere::Sphere(const double radius)
{
	set_radius(radius);
}

void Sphere::set_radius(const double radius)
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

double Sphere::get_volume()
{
	return (4 / 3) * M_PI * radius * radius * radius;
}

double Sphere::get_surface_area()
{
	double s = 4 * M_PI * radius * radius;
	return s;
}
