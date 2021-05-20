#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <iostream>

double GetA(const double x);
/**
* \brief функция для расчёта a
* \param x параметр x
* \return возвращает значение GetA
*/
double GetB(const double x, const double y);
/**
* \brief функция для расчёта b
* \param x параметр x
* \param y параметр y
* \return возвращает значение переменной GetB
*/

/**
* \brief точка входа в програму
* \return возращает ноль, если успешно
*/

int main()
{
const double x = 0.335;
const double y = 0.025;

const auto a = GetA(x);
const auto b = GetB(x, y);

std::cout « "x =" « x « ", y =" « y « "\n";
std::cout « "a =" « a « ", b =" « b « std::endl;

return 0;

}

double GetA(const double x)
{
return 1 + x + (pow(x, 2) / 2) + (pow(x, 3) / 3) + (pow(x, 4) / 4);
}

double GetB(const double x, const double y)
{
return x * (sin(pow(x, 3)) + cos(pow(y, 2)));
}
