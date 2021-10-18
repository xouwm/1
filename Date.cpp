#include "Date.h"
#include <iostream>

enum Valid
{
    MIN_DAY = 1,
    MIN_MONTH = 1,
    MAX_MONTH = 12,
    MIN_YEAR = 0,
};

void Date::set_day(const int day)
{
    if (day >= Valid::MIN_DAY && day <= days_in_month[month])
    {
        this->day = day;
        Triad::c = day;
    }
    else
    {
        throw std::invalid_argument{ "День меньше 1 или больше максимально возможного значения" };
    }
}

void Date::set_month(const int month)
{
    if (month >= Valid::MIN_MONTH && month <= Valid::MAX_MONTH)
    {
        this->month = month;
        Triad::b = month;
    }
    else
    {
        throw std::invalid_argument{ "Месяц меньше 1 или больше 12" };
    }
}

void Date::set_year(const int year)
{
    if (year > Valid::MIN_YEAR)
    {
        this->year = year;
        Triad::c = year;
    }
    else
    {
        throw std::invalid_argument{ "Год меньше или равен 0" };
    }
}

Date::Date(const int day, const int month, const int year)
{
    set_month(month);
    set_day(day);
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