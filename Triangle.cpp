#include "Triangle.h"
#include <iostream>

double get_perimetr(double a, double b, double c)
{
	return a + b + c;
}

double get_perimetr_2(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		get_perimetr(a, b, c);
	}
	else
	{
		throw 1;
	}
}

double get_perimetr_3(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		get_perimetr(a, b, c);
	}
	else
	{
		throw std::invalid_argument("Error! Length of the side can only be more than 0");
	}
}

double get_perimetr_4(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		get_perimetr(a, b, c);
	}
	else
	{
		throw empty_class();
	}
}

double  get_perimetr_5(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		get_perimetr(a, b, c);
	}
	else
	{
		throw independent_class("Error! Length of the side can only be more than 0. Independent class.");
	}
}

double  get_perimetr_6(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0)
	{
		get_perimetr(a, b, c);
	}
	else
	{
		throw successor_class("Error! Length of the side can only be more than 0. Successor class.");
	}
}