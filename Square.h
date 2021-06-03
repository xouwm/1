#pragma once
#include <iostream>
using namespace std;

class Square
{
private:
	double upper_left_corner_x;
	double upper_left_corner_y;
	double length;
	/**
	 \brief	Устанавливает длину квадрата
	 */
	void set_length(double length);
public:
	/**
	 \brief	Конструктор с параметрами
	 */
	explicit Square(double upper_left_corner_x, double upper_left_corner_y, double length);
	/**
	 \brief	Конструктор длины
	 */
	explicit Square(double side);
	/**
	 \brief	Деструктор по умолчанию
	 */
	~Square() = default;
	/**
	 \brief	Конструктор копирования по умолчанию
	 */
	Square(const Square&) = default;
	/**
	 \brief	Конструктор присваивания по умолчанию
	 */
	Square& operator=(const  Square&) = default;
	/**
	 \brief	Устанавливает координату по x
	 */
	void set_upper_left_corner_x(double x);
	/**
	 \brief	Устанавливает координату по y
	 */
	void set_upper_left_corner_y(double y);
	/**
	 \brief	Устанавливает новое значение длины
	 */
	void set_new_length(double length);
	/**
	 \brief	Получает периметр квадрата
	 */
	double get_perimeter();
	/**
	 \brief	Получает площадь квадрата
	 */
	double get_area();
	/**
	 \brief	Оператор сдвига
	 */
	friend ostream& operator<<(ostream& out, const Square& sq);
};