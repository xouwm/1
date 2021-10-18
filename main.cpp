#include <iostream>
#include <windows.h>


/**
* @brief Собственное исключение, пустой класс
*/
class OwnException1
{};

/**
* @brief Собственное исключение, независимый класс
*/
class OwnException2
{
    std::string msg;
public:
    OwnException2(const std::string& s) : msg(s) {}
    const char* message() const { return msg.c_str(); }
};

/**
* @brief Собственное исключение, класс-наследник от стандартного исключени¤
*/
class OwnException3 : public std::exception
{
private:
    std::string m_error;

public:
    OwnException3(std::string error)
        : m_error(error)
    {
    }
    const char* what() const noexcept { return m_error.c_str(); }
};

double GetTrianglePerimetr(const double a, const double b, const double c)
{
    return a + b + c;
}

// Функция без спецификации исключений
double NoException(const double a, const double b, const double c)
{
    if (a < 0)
        throw std::exception();

    if (b < 0)
        throw std::exception();

    if (c < 0)
        throw std::exception();

    return GetTrianglePerimetr(a, b, c);
}

// Функция со спецификацией throw
int ThrowException(const double a, const double b, const double c) throw()
{
    // Если вызвать throw в этой функции, то, при ошибке, работа программы прекратитс¤, т.к. стоит спецификатор throw()

    if (a < 0)
        throw("Длина первой стороны треугольника не может быть меньше 0");

    if (b < 0)
        throw("Длина второй стороны треугольника не может быть меньше 0");

    if (c < 0)
        throw("Длина третьей стороны треугольника не может быть меньше 0");

    return GetTrianglePerimetr(a, b, c);
}

// Функция с конкретной спецификацией и подходящим исключением
int ConcreteException(const double a, const double b, const double c) throw(std::underflow_error)
{
    if (a < 0)
        throw std::underflow_error("Длина первой стороны треугольника не может быть меньше 0");

    if (b < 0)
        throw std::underflow_error("Длина второй стороны треугольника не может быть меньше 0");

    if (c < 0)
        throw std::underflow_error("Длина третьей стороны треугольника не может быть меньше 0");

    return GetTrianglePerimetr(a, b, c);
}

// Функция со своим исключением
int OwnException(const double a, const double b, const double c) throw(OwnException2, OwnException3)
{
    if (a < 0)
        throw OwnException2("Длина первой стороны треугольника не может быть меньше 0");

    if (b < 0)
        throw OwnException2("Длина второй стороны треугольника не может быть меньше 0");

    if (c < 0)
        throw OwnException2("Длина третьей стороны треугольника не может быть меньше 0");
    
    return GetTrianglePerimetr(a, b, c);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // Функция без спецификации исключений
    try
    {
        std::cout << NoException(15, 10, -1) << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Функция со спецификацией throw
    std::cout << ThrowException(0, 0, 0) << std::endl;

    // Функция с конкретной спецификацией и подходящим исключением
    try
    {
        std::cout << ConcreteException(15, 10, -1) << std::endl;

    }
    catch (std::underflow_error& e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Функция со своим исключением
    try
    {
        std::cout << OwnException(15, 10, -1) << std::endl;
    }
    catch (OwnException1& e)
    {
        std::cerr << "Ошибка от исключения с пустым классом." << std::endl;
    }
    catch (OwnException2& e)
    {
        std::cerr << e.message() << std::endl;
    }
    catch (OwnException3& e)
    {
        std::cerr << e.what() << std::endl;
    }
}