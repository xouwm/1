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
	*\brief сеттер стороны для проверки длины
		* \param x1 координата x1
		* \param y1 координата y1
		* \param length длина
	*/
	void set_length(double x1, double y1, double length);

public:


	/**
	*\brief Конструктор с параметрами
		* \param x1 координата x1
		* \param y1 координата y1
		* \param length длина
	*/
	explicit Square(double x1, double y1, double length);


	/**
	*\brief Конструктор копирования по умолчанию
	*/
	Square(const  Square&) = default;

	/**
	*\brief Конструктор присвоения
	*/
	Square& operator=(const  Square&) = default;


	friend std::ostream& operator<<(std::ostream& out, Square& F);


	/**
	*\brief деструктор по умолчанию
	*/
	~Square() = default;


	/**
	*\brief метод, выводящий координату x1
	*  \return координата x1
	*/
	double get_vortex_x1();
	/**
	*\brief метод, выводящий координату x2
	*  \return координата x1
	*/
	double get_vortex_x2();
	/**
	*\brief метод, выводящий координату x3
	*  \return координата x3
	*/
	double get_vortex_x3();
	/**
	*\brief метод, выводящий координату x4
	*  \return координата x4
	*/
	double get_vortex_x4();

	/**
	*\brief метод, выводящий координату y1
	*  \return координата y1
	*/
	double get_vortex_y1();
	/**
	*\brief метод, выводящий координату y2
	* 	* \return координата y2
	*/
	double get_vortex_y2();
	/**
	*\brief метод, выводящий координату y3
	* 	* \return координата y3
	*/
	double get_vortex_y3();
	/**
	*\brief метод, выводящий координату y4
	* 	* \return координата y4
	*/
	double get_vortex_y4();

	/**
	*\brief метод, выводящий координату x1 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x1
	*/
	double get_changed_coordinates_x1(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x2 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x2
	*/
	double get_changed_coordinates_x2(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x3 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x3
	*/
	double get_changed_coordinates_x3(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату x4 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата x4
	*/
	double get_changed_coordinates_x4(double change_of_coordinate);


	/**
	*\brief метод, выводящий координату y1 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y1
	*/
	double get_changed_coordinates_y1(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y2 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y2
	*/
	double get_changed_coordinates_y2(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y3 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y3
	*/
	double get_changed_coordinates_y3(double change_of_coordinate);
	/**
	*\brief метод, выводящий координату y4 с учётом изменёния координат
	*
	* \param изменение координат
	* \return изменённая координата y4
	*/
	double get_changed_coordinates_y4(double change_of_coordinate);


	/**
	*\brief метод, выводящий периметр квадрата
	*
	* \return периметр
	*/
	double get_perimeter();

	/**
	*\brief метод, выводящий площадь квадрата
	*
	* \return площадь
	*/
	double get_square();


	/**
	*\brief метод, выводящий координату x1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x1
	*/
	double get_rotated_x1();
	/**
	*\brief метод, выводящий координату x2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x2
	*/
	double get_rotated_x2();
	/**
	*\brief метод, выводящий координату x3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x3
	*/
	double get_rotated_x3();
	/**
	*\brief метод, выводящий координату x4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата x4
	*/
	double get_rotated_x4();

	/**
	*\brief метод, выводящий координату y1, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y1
	*/
	double get_rotated_y1();
	/**
	*\brief метод, выводящий координату y2, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y2
	*/
	double get_rotated_y2();
	/**
	*\brief метод, выводящий координату y3, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y3
	*/
	double get_rotated_y3();
	/**
	*\brief метод, выводящий координату y4, повёрнутую на 90 градусов
	*
	* \return повёрнутая координата y4
	*/
	double get_rotated_y4();
};