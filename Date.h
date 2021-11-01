#pragma once
#include <string>
#include "Triad.h"
#include "Enums.h"

class Date : public Triad
{

private:
    /**
    \brief	день
    */
    int day;

    /**
    \brief	месяц
    */
    int month;

    /**
    \brief	год
    */
    int year;

    /**
    \brief	массив с количеством дней в месяцах
    */
    int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    /**
    *\brief сеттер day
        * \param day значение дня
    */
    void set_day(const int day);

    /**
    *\brief сеттер month
        * \param month значение месяца
    */
    void set_month(const int month);

    /**
    *\brief сеттер year
        * \param year значение года
    */
    void set_year(const int year);
public:
    /**
    \brief	конструктор с параметрами
    */
    explicit Date(const int day, const int month, const int year);

    /**
    \brief	конструктор копирования по умолчанию
    */
    Date(const  Date&) = default;

    /**
    \brief	конструктор присвоения по умолчанию
    */
    Date& operator=(const  Date&) = default;

    /**
    \brief	деструктор по умолчанию
    */
    ~Date() = default;

    /**
    \brief	метод, возвращающий день
    */
    int get_day();

    /**
    \brief	метод, возвращающий месяц
    */
    int get_month();

    /**
    \brief	метод, возвращающий год
    */
    int get_year();

    /**
    \brief	методы, сравнивающие даты
    */
    bool are_equal(const Date& other);

    bool is_greater(const Date& other);

    bool is_less(const Date& other);

};