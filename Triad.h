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
	explicit Triad(int a, int b, int c);

	/**
	\brief	конструктор копирования по умолчанию
	*/
	Triad(const  Triad&) = default;

	/**
	\brief	конструктор присвоения по умолчанию
	*/
	Triad& operator=(const  Triad&) = default;

	friend std::ostream& operator<<(std::ostream& out,Triad& F)
	{
		return out << F.get_a() << "|" << F.get_b() << "|" << F.get_c();
	}

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
	\brief	метод, возвращающий произведение чисел в триаде
	*/
	int get_composition();

	/**
	\brief	метод, изменяющий число a
	*/
	int set_change_of_a(int changed_a);

	/**
	\brief	метод, изменяющий число b
	*/
	int set_change_of_b(int changed_b);

	/**
	\brief	метод, изменяющий число c
	*/
	int set_change_of_c(int changed_c);

};