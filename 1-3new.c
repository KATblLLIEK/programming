#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <iostream>

using namespace std;

double GetResistance(const double r1, const double r2, const double r3);


/**
*\brief вход в программу
*\return возвращает ноль,если успешно
*/

int main()
{

/**
*\brief функци€ ввода
*\return возвращает ноль,если успешно
*/

double r1;
cout Ђ "Input the first resistance = ";
cin ї r1;

double r2;
cout Ђ "Input the second resistance = ";
cin ї r2;

double r3;
cout Ђ "Input the third resistance = ";
cin ї r3;

cout Ђ "\nResistance = " Ђ GetResistance(r1,r2,r3);

return 0;

}

/**
*\brief функци€расчЄта сопротивлени€
*\param r1 параметр первого сопротивлени€
*\param r2 параметр второго сопротивлени€
*\param r3 параметр третьего сопротивлени€
*\return возвращает ноль,если успешно
*/

double GetResistance(const double r1, const double r2, const double r3)
{
return (r1*r2*r3) / (r2*r3 + r1 * r3 + r1 * r2);
}
