#include <iostream>
#include"Cone.h"
#include"Pyramid.h"
#include"Sphere.h"

int main()
{
	setlocale(LC_ALL, "rus");

	enum figure { cone = 1, sphere, pyramid };

	Cone a(15, 10);
	Sphere b(1);
	Pyramid c(10, 10, 10);

	int figureCode;

	std::cout << "Введите номер фигуры из предложенных (" << static_cast<int>(figure::cone) << " - конус, "
		<< static_cast<int>(figure::sphere) << " - шар, " << static_cast<int>(figure::pyramid) << " - пирамида):" << std::endl;

	std::cin >> figureCode;

	switch (figureCode)
	{
		case figure::cone:
		{
			double height, radius;

			std::cout << "Введите высоту конуса: " << std::endl;
			std::cin >> height;

			std::cout << "Введите радиус конуса: " << std::endl;
			std::cin >> radius;

			Cone cone(height, radius);

			std::cout << "Объём конуса равен: " << cone.get_volume() << std::endl;
			std::cout << "Площадь поверхности конуса равна:" << cone.get_surface_area() << std::endl;

			break;
		}

		case figure::sphere:
		{
			double radius;

			std::cout << "Введите радиус шара: " << std::endl;
			std::cin >> radius;

			Sphere sphere(radius);

			std::cout << "Объём шара равен: " << sphere.get_volume() << std::endl;
			std::cout << "Площадь поверхности шара равна:" << sphere.get_surface_area() << std::endl;

			break;
		}

		case figure::pyramid:
		{
			double a, b, height;

			std::cout << "ВВведите сторону a пирамиды: " << std::endl;
			std::cin >> a;
			std::cout << "Введите сторону b пирамиды: " << std::endl;
			std::cin >> b;
			std::cout << "Введите высоту пирамиды: " << std::endl;
			std::cin >> height;

			Pyramid pyramid(a, b, height);

			std::cout << "Объём пирамиды равен: " << pyramid.get_volume() << std::endl;
			std::cout << "Площадь поверхности пирамиды равна:" << pyramid.get_surface_area() << std::endl;

			break;
		}
		default:
		{
			std::cout << "Введите номер фигуры из предложенных (" << static_cast<int>(figure::cone) << " - конус, "
				<< static_cast<int>(figure::sphere) << " - шар, " << static_cast<int>(figure::pyramid) << " - пирамида):" << std::endl;
			break;
		}
	}
}