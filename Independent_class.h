#pragma once
#include<string>
using namespace std;
/**
* \brief Независимый класс с полями, для возврата ошибки
*/
class independent_class {
public:
	string message;
	explicit independent_class(string message);
	/**
	* \brief Деструктор по умолчанию
	*/
	~independent_class();
};
