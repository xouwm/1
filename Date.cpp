#include "Date.h"
#include<iostream>

void Date::set_date(int day, int month, int year)
{
    if (day > 0 && month > 0 && year >= 0)
    {
        this->a = day;
        this->b = month;
        this->c = year;
    }
    else
    {
        throw std::invalid_argument{ "ѕиво" };
    }
}

Date::Date(int day, int month, int year)
{
    set_date(day, month, year);
}


bool Date::checkDay(Date& date) {
    for (auto i : { 0, 2, 4, 6, 7, 9, 11 }) {
        if (date.get_month() == i + 1) {
            if (date.get_day() >= 1 && date.get_day() <= days_in_month[i]) {
                return true;
            }
        }
    }

for (auto i : { 3, 5, 8, 10 }) {
    if (date.get_month() == i + 1) {
        if (date.get_day() >= 1 && date.get_day() <= days_in_month[i]) {
            return true;
        }
    }
}
if (date.get_month() == 2) {
    if (isLeapYear(date.get_year())) {
        if (date.get_day() >= 1 && date.get_day() <= 29) {
            return true;
        }
    }
    else {
        if (date.get_day() >= 1 && date.get_day() <= 28) {
            return true;
        }
    }
}
return false;
    }
bool Date::checkMonth(Date& date)
{ //‘ункци¤ проверки мес¤ца на валидность
    if (date.get_month() >= 1 && date.get_month() <= 12) {
        return true;
    }
    return false;
}
bool Date::checkYear(Date& date)
{ //‘ункци¤ проверки года на валидность
    if (date.get_year() >= 1900 && date.get_year() <= 2040) {
        return true;
    }
    return false;
}

bool Date::checkDate(Date& date)
{ //‘ункци¤ проверки даты на валидность
    if ((checkDay(date) == true) &&
        (checkMonth(date) == true) &&
        (checkYear(date) == true)) {
        return true;
    }
    else {
        return false;
    }
}


bool Date::isLeapYear(int year)
{ //‘ункци¤ проверки ¤вл¤етс¤ ли год високосным (реализуем виртуальный метод абстрактного класса)
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return true;
    }
    return false;
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



bool Date::are_equal(Date& other)
{
    if (year == other.year)
    {
        if (month == other.month)
        {

            if (day == other.day)
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

bool Date::is_greater(Date& other)
{
    if (year > other.year)
    {
        return true;
    }
    else if (year == other.year)
    {
        if (month > other.month)
        {
            return true;
        }
        if (month == other.month)
        {
            if (day > other.day)
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

bool Date::is_less(Date& other)
{

    if (year == other.year)
    {
        if (month == other.month)
        {
            if (day < other.day) {
                return true;
            }
        }
        else if (month < other.month)
        {
            return true;
        }
    }
    else if (year < other.year)
    {
        return true;
    }
    else
    {
        return false;
    }

}

std::ostream& operator<<(std::ostream& out, Date& F)
{
    return out << F.get_day() << "|" << F.get_month() << "|" << F.get_year();
}