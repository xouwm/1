#pragma once

class Triad
{
protected:
	/**
	 \brief	число a
	 */
	int a;
	/**
	\brief	число b
	*/
	int b;
	/**
	\brief	число c
	*/
	int c;

	/**
	*\brief сеттер a
	* \param a значение a
	*/
	void set_a(const int a);
	/**
	*\brief сеттер b
	* \param b значение b
	*/
	void set_b(const int b);
	/**
	*\brief сеттер c
	* \param c значение c
	*/
	void set_c(const int c);
public:
	/**
	\brief	конструктор по умолчанию
	*/
	Triad();

	/**
	*\brief конструктор с параметрами
	* \param число a
	* \param число b
	* \param число c
	*/
	explicit Triad(const int a, const int b, const int c);

	/**
	\brief	конструктор копирования по умолчанию
	*/
	Triad(const  Triad&) = default;

	/**
	\brief	конструктор присвоения по умолчанию
	*/
	Triad& operator=(const  Triad&) = default;

	/**
	\brief	деструктор по умолчанию
	*/
	~Triad() = default;

	/**
	\brief	метод, возвращающий число a
	*/
	int get_a();

	/**
	\brief	метод, возвращающий число b
	*/
	int get_b();

	/**
	\brief	метод, возвращающий число c
	*/
	int get_c();

	/**
	\brief	методы, сравнивающие числа
	*/
	bool are_equal(const Triad& other);

	bool is_greater(const Triad& other);

	bool is_less(const Triad& other);
};