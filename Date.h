#pragma once
#include <string>
#include"Triad.h"

class Date : public Triad
{
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
 \brief	Сеттер принимающий числа из триады и проверяющий их на условия date
 */
void set_date(int a, int b, int c);

public:

    /**
    \brief	конструктор с параметрами
    */
	explicit Date(int day, int month, int year);

    /**
    \brief	конструктор копирования по умолчанию
    */
    Date(const  Date&) = default;

    /**
    \brief	конструктор присвоения по умолчанию
    */
    Date& operator=(const  Date&) = default;

    friend std::ostream& operator<<(std::ostream& out, Date& F);

    /**
    \brief	деструктор по умолчанию
    */
    ~Date() = default;

    /**
    \brief	метод, проверяющий валидность дня
    */
    bool checkDay(Date& date);

    /**
    \brief	метод, проверяющий валидность месяца
    */
    bool checkMonth(Date& date);

    /**
    \brief	метод, проверяющий валидность года
    */
    bool checkYear(Date& date);

    /**
    \brief	метод, проверяющий валидность даты
    */
    bool checkDate(Date& date);

    /**
    \brief	метод, проверяющий високосность года
    */
    bool isLeapYear(int year);

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
    bool are_equal(Date& other);

    bool is_greater(Date& other);

    bool is_less(Date& other);

};