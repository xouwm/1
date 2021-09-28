#include <iostream>
#include "Triangle.h"

int main()
{
	std::cout << get_perimetr(1, 2, 3) << std::endl;

	try 
	{
		std::cout << get_perimetr_2(0, 0, 0)<<std::endl;
		std::cout << get_perimetr_3(0, 0, 0)<<std::endl;
		std::cout << get_perimetr_4(0, 0, 0)<<std::endl;
		std::cout << get_perimetr_5(0, 0, 0)<<std::endl;
		std::cout << get_perimetr_6(0, 0, 0)<<std::endl;
	}
	catch (int)
	{
		std::cerr << "Error! One side or more is equal to 0 or less than 0! (specifier twrow)";
	}
	catch (invalid_argument error)
	{
		std::cerr << error.what() << std::endl;
	}
	catch (empty_class)
	{
		std::cerr << "Error!One side or more is equal to 0 or less than 0! (Empty class)" << std::endl;
	}
	catch (independent_class error) 
	{
		std::cerr << error.message << std::endl;
	}
	catch (successor_class error) 
	{
		std::cerr << error.what() << std::endl;
	}
}