#pragma once
#include "Cone.h"
#include "Figure.h"

class Pyramid : public Figure
{
private:
	/**
	*\brief сторона a (сторона основания)
	*/
	double a;

	/**
	*\brief сторона b (сторона треугольника)
	*/
	double b;

	/**
	*\brief высота
	*/
	double height;

	/**
	*\brief сеттер для стороны a
	* \param a сторона a
	*/
	void set_a(const double a);

	/**
	*\brief сеттер для стороны b
	* \param b сторона b
	*/
	void set_b(const double b);

	/**
	*\brief сеттер для высоты
	* \param height высота
	*/
	void set_height(const double height);
public:
	/**
	*\brief конструктор с параметрами
	* \param a сторона a
	* \param b сторона b
	* \param height высота
	*/
	explicit Pyramid(const double a, const double b, const double height);


	/**
	*\brief деструктор по умолчанию
	*/
	~Pyramid() override = default;


	/**
	*\brief метод, возвращающий объём пирамиды
	*/
	double get_volume() override;

	/**
	*\brief метод, возвращающий площадь поверхности пирамиды
	*/
	double get_surface_area() override;
};