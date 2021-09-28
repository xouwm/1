#pragma once
#include<exception>
#include<iostream>
using namespace std;
/**
* \brief † ласс насследник от стандартного исключени§, дл¤ возврата ошибки
*/
class successor_class :public invalid_argument {
public:
	explicit successor_class(string message);

	/**
	* \brief деструктор по умолчанию
	*/
	~successor_class();
};
