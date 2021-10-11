#pragma once

class Square
{
private:
	/**
	*\brief поле x1 (координата x левой верхней точки)
	*/
	double x1;
	/**
	*\brief поле y1 (координата y левой верхней точки)
	*/
	double y1;
	/**
	*\brief поле, отвечающее за длину
	*/
	double length;

	/**
	*\brief сеттер длины
		* \param length длина
	*/
	void set_length(const double length);

	/**
	*\brief сеттер координаты x1
		* \param x1 координата x1
	*/
	void set_x1(const double x1);

	/**
	*\brief сеттер координаты y1
		* \param y1 координата y1
	*/
	void set_y1(const double y1);

public:


	/**
	*\brief Конструктор с параметрами
		* \param x1 координата x1
		* \param y1 координата y1
		* \param length длина
	*/
	explicit Square(const double x1, const double y1, const double length);


	/**
	*\brief Конструктор копирования по умолчанию
	*/
	Square(const  Square&) = default;

	/**
	*\brief Конструктор присвоения
	*/
	Square& operator=(const  Square&) = default;


	/**
	*\brief деструктор по умолчанию
	*/
	~Square() = default;


	/**
	*\brief метод, выводящий координату x1
	*  \return координата x1
	*/
	const double get_vortex_x1();
	/**
	*\brief метод, выводящий координату x2
	*  \return координата x1
	*/
	const double get_vortex_x2();
	/**
	*\brief метод, выводящий координату x3
	*  \return координата x3
	*/
	const double get_vortex_x3();
	/**
	*\brief метод, выводящий координату x4
	*  \return координата x4
	*/
	const double get_vortex_x4();

	/**
	*\brief метод, выводящий координату y1
	*  \return координата y1
	*/
	const double get_vortex_y1();
	/**
	*\brief метод, выводящий координату y2
	* 	* \return координата y2
	*/
	const double get_vortex_y2();
	/**
	*\brief метод, выводящий координату y3
	* 	* \return координата y3
	*/
	const double get_vortex_y3();
	/**
	*\brief метод, выводящий координату y4
	* 	* \return координата y4
	*/
	const double get_vortex_y4();

	/**
	*\brief метод, изменяющий длину стороны
	*
	* \param length новая длина стороны
	*/
	void change_length(const double length);

	/**
	*\brief метод, изменяющий координату x1
	*
	* \param x1 новая координата x1
	*/
	void change_x1(const double x1);

	/**
	*\brief метод, изменяющий координату x2
	*
	* \param x2 новая координата x2
	*/
	void change_x2(const double x2);

	/**
	*\brief метод, изменяющий координату x3
	*
	* \param x3 новая координата x3
	*/
	void change_x3(const double x3);

	/**
	*\brief метод, изменяющий координату x4
	*
	* \param x4 новая координата x4
	*/
	void change_x4(const double x4);


	/**
	*\brief метод, изменяющий координату y1
	*
	* \param y1 новая координата y1
	*/
	void change_y1(const double y1);

	/**
	*\brief метод, изменяющий координату y2
	*
	* \param y2 новая координата y2
	*/
	void change_y2(const double y2);

	/**
	*\brief метод, изменяющий координату y3
	*
	* \param y3 новая координата y3
	*/
	void change_y3(const double y3);

	/**
	*\brief метод, изменяющий координату y4
	*
	* \param y4 новая координата y4
	*/
	void change_y4(const double y4);


	/**
	*\brief метод, выводящий периметр квадрата
	*
	* \return периметр
	*/
	const double get_perimeter();

	/**
	*\brief метод, выводящий площадь квадрата
	*
	* \return площадь
	*/
	const double get_square();


	/**
	*\brief метод, выводящий координату x1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x1
	*/
	const double get_rotated_x1();
	/**
	*\brief метод, выводящий координату x2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x2
	*/
	const double get_rotated_x2();
	/**
	*\brief метод, выводящий координату x3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x3
	*/
	const double get_rotated_x3();
	/**
	*\brief метод, выводящий координату x4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x4
	*/
	const double get_rotated_x4();

	/**
	*\brief метод, выводящий координату y1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y1
	*/
	const double get_rotated_y1();
	/**
	*\brief метод, выводящий координату y2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y2
	*/
	const double get_rotated_y2();
	/**
	*\brief метод, выводящий координату y3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y3
	*/
	const double get_rotated_y3();
	/**
	*\brief метод, выводящий координату y4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y4
	*/
	const double get_rotated_y4();
};