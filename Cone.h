#pragma once
#include <cmath>
#include "Figure.h"

class Cone : public Figure
{
private:
	/**
	*\brief высота
	*/
	double height;

	/**
	*\brief радиус
	*/
	double radius;

	/**
	*\brief сеттер дл¤ высоты
	* \param height высота
	*/
	void set_height(const double height);

	/**
	*\brief сеттер дл¤ радиуса
	* \param radius радиус
	*/
	void set_radius(const double radius);
public:
	/**
	*\brief конструктор с параметрами
	* \param height высота
	* \param radius радиус
	*/
	Cone(const double height, const double radius);


	/**
	*\brief деструктор по умолчанию
	*/
	~Cone() override = default;


	/**
	*\brief метод, вычисл¤ющий объЄм конуса
	*/
	double get_volume() override;

	/**
	*\brief метод, вычисл¤ющий площадь поверхности
	*/
	double get_surface_area() override;
};