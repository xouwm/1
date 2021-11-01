#include "Triad.h"

Triad::Triad()
{
	a = 0;
	b = 0;
	c = 0;
}

Triad::Triad(const int a, const int b, const int c)
{
	set_a(a);
	set_b(b);
	set_c(c);
}

void Triad::set_a(const int a) { this->a = a; }

void Triad::set_b(const int b) { this->b = b; }

void Triad::set_c(const int c) { this->c = c; }

int Triad::get_a() { return a; }
int Triad::get_b() { return b; }
int Triad::get_c() { return c; }

bool Triad::are_equal(const Triad& other)
{
    return this->a == other.a && this->b == other.b && this->c == other.c;
}

bool Triad::is_greater(const Triad& other)
{
    if (a > other.a)
    {
        return true;
    }
    else if (a == other.a)
    {
        if (b > other.b)
        {
            return true;
        }
        if (b == other.b)
        {
            if (c > other.c)
            {
                return true;
            }
        }
    }
    else
    {
        return false;
    }
}

bool Triad::is_less(const Triad& other)
{
    if (a == other.a)
    {
        if (b == other.b)
        {
            if (c < other.c) {
                return true;
            }
        }
        else if (b < other.b)
        {
            return true;
        }
    }
    else if (a < other.a)
    {
        return true;
    }
    else
    {
        return false;
    }
}