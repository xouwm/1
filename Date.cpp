#include "Date.h"
#include<iostream>

void Date::set_day(const int day)
{
    if (day >= 1 && year <= 31)
    {
        this->day = day;
        Triad::c = day;
    }
    else
    {
        throw std::invalid_argument{ "ƒень меньше 1 или больше 31" };
    }
}

void Date::set_month(const int month)
{
    if (month >= 1 && year <= 12)
    {
        this->month = month;
        Triad::b = month;
    }
    else
    {
        throw std::invalid_argument{ "ћес¤ц меньше 1 или больше 12" };
    }
}

void Date::set_year(const int year)
{
    if (year > 0)
    {
        this->year = year;
        Triad::c = year;
    }
    else
    {
        throw std::invalid_argument{ "√од меньше или равен 0" };
    }
}

Date::Date(const int day, const int month, const int year)
{
    set_day(day);
    set_month(month);
    set_year(year);
}

int Date::get_day()
{
    return day;
}

int Date::get_month()
{
    return month;
}

int Date::get_year()
{
    return year;
}



bool Date::are_equal(const Date& other)
{
    Triad triadThis(year, month, day);
    Triad triadOther(other.year, other.month, other.day);
    return triadThis.are_equal(triadOther);
}

bool Date::is_greater(const Date& other)
{
    Triad triadThis(year, month, day);
    Triad triadOther(other.year, other.month, other.day);
    return triadThis.is_greater(triadOther);
}

bool Date::is_less(const Date& other)
{
    Triad triadThis(year, month, day);
    Triad triadOther(other.year, other.month, other.day);
    return triadThis.is_less(triadOther);
}

std::ostream& operator<<(std::ostream& out, Date& F)
{
    return out << F.get_day() << "|" << F.get_month() << "|" << F.get_year();
}