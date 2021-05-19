#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <iostream>

using namespace std;

double GetSquare(const double radius);
/**
* \brief Функция для расчёта площади поверхности шара
* \param radius параметр радиуса
* \return возвращает площадь поверхности шара
*/

double GetVolume(const double radius);
/**
* \brief Функция для расчёта объёма шара
* \param radius Параметр радиуса
* \return возвращает объём фигуры
*/

/**
* \brief точка входа
* \return возвращает ноль, если успешно
*/

int main()
{
double radius;
cout « "Input the radius = ";
cin » radius;
cout « "\nSquare = " « GetSquare(radius);
cout « "\nVolume = " « GetVolume(radius);
return 0;
}

double GetSquare(const double radius)
{
return pow(radius, 2) * 4 * M_PI;
}

double GetVolume(const double radius)
{
return pow(radius, 3) * 4 / 3 * M_PI;
}
