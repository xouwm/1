#include "Triad.h"

Triad::Triad()
{
	a = 0;
	b = 0;
	c = 0;
}

Triad::Triad(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

int Triad::get_a() { return a; }
int Triad::get_b() { return b; }
int Triad::get_c() { return c; }

int Triad::get_composition() { return a * b * c; }

int Triad::set_change_of_a(int changed_a) { return changed_a; }
int Triad::set_change_of_b(int changed_b) { return changed_b; }
int Triad::set_change_of_c(int changed_c) { return changed_c; }