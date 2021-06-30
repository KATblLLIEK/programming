#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

/**
* \brief Перечислимый тип: выбор расчёта площади круга или трапеции .
*/

enum class Figure
{
/**
* \brief Неправильно сформулированный выбор.
*/
none,

/**
* \brief Выбрана фигура - круг.
*/
circle,

/**
* \brief Выбрана фигура - трапеция.
*/
trapezoid
};

/**
* \brief Функция для расчета площади трапеции.
* \param a Параметр основания a.
* \param b Параметр основания b.
* \param h Параметр высоты h.
* \return Площадь трапеции.
*/

double GetTrapezoid(double a, double b, double h);

/**
* \brief Функция для расчета площади круга.
* \param r Параметр - радиус.
* \return Площадь круга.
*/

double GetCircle(double r);

/**
* \brief Ввод значений параметров.
* \param message Разъясняющая надпись.
* \return Значение параметра.
*/

double ReadSide(const string& message = "");

/**
* \brief
* \param message
* \return
*/

Figure ReadUserChoice(const string& message = "");

/**
* \brief Точка входа в программу.
* \return Код ошибки, если 0 - успешное выполнение.
*/

int main()
{
setlocale(LC_ALL, "Russian");

const auto message = "Выберите, что нужно посчитать("
+ to_string(static_cast<int>(Figure::circle)) + " - площадь круга, "
+ to_string(static_cast<int>(Figure::trapezoid)) + " - площадь трапеции):";

const auto Figure = ReadUserChoice(message);

switch (Figure)
{

case Figure::circle:
{

const auto r = ReadSide("Введите радиус круга = ");
const auto Square_Circle = GetCircle(r);
cout « "Площадь круга = " « Square_Circle « endl;

break;
}

case Figure::trapezoid:
{
double z = 0, quantity = 0;

const auto a = ReadSide("Введите первое основание трапеции = ");
const auto b = ReadSide("Введите второе основание трапеции = ");
const auto h = ReadSide("Введите высоту трапеции = ");
const auto Square_Trapezoid = GetTrapezoid(a, b, h);
cout « "Площадь трапеции = " « Square_Trapezoid « endl;
break;
}
default:
cout « "Ошибка!";
}

return 0;
}

double GetCircle(double r)
{
return M_PI * pow(r, 2);
}


double GetTrapezoid(double a, double b, double h)
{
return ((a + b) / 2)*h;
}

double ReadSide(const string& message)
{
cout « message;
double side;
cin » side;
return side;
}

Figure ReadUserChoice(const string& message)
{
cout « message ;
int userInput;
cin » userInput;
return static_cast<Figure>(userInput);
}
