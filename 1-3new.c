#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <iostream>

using namespace std;

/**
*\brief функция расчёта сопротивления
*\param r1 параметр первого сопротивления
*\param r2 параметр второго сопротивления
*\param r3 параметр третьего сопротивления
*\return возвращает ноль,если успешно
*/
double GetResistance(const double r1, const double r2, const double r3);


/**
*\brief вход в программу
*\return возвращает ноль,если успешно
*/

int main()
{

/**
*\brief функция ввода
*\return возвращает ноль,если успешно
*/

double r1;
cout « "Input the first resistance = ";
cin » r1;

double r2;
cout « "Input the second resistance = ";
cin » r2;

double r3;
cout « "Input the third resistance = ";
cin » r3;

cout « "\nResistance = " « GetResistance(r1,r2,r3);

return 0;

}

double GetResistance(const double r1, const double r2, const double r3)
{
return (r1*r2*r3) / (r2*r3 + r1 * r3 + r1 * r2);
}
