#pragma once
#include "Cone.h"
#include "Figure.h"

class Sphere : public Figure
{
private:
	/**
	*\brief радиус
	*/
	double radius;

	/**
	*\brief сеттер для радиуса
	* \param radius радиус
	*/
	void set_radius(const double radius);
public:
	/**
	*\brief конструктор с параметрами
	* \param radius радиус
	*/
	explicit Sphere(const double radius);

	/**
	*\brief деструктор по умолчанию
	*/
	~Sphere() override = default;


	/**
	*\brief метод, возвращающий объём шара
	*/
	double get_volume() override;

	/** метод, возвращающий площадь поверхности шара
	*\brief
	*/
	double get_surface_area() override;
};