#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

/**
* \brief перечислимый тип: выбор расчёта площади круга или трапеции .
*/

enum class Figure
{
/**
* \brief пеправильно сформулирован выбор.
*/
none,

/**
* \brief выбран круг.
*/
circle,

/**
* \brief Выбрана трапеция.
*/
trapezoid
};

/**
* \brief функция расчета площади трапеции.
* \param a параметр основания a.
* \param b параметр основания b.
* \param h параметр высоты h.
* \return площадь трапеции.
*/

const double GetTrapezoid(double a, double b, double h);

/**
* \brief функция расчета площади круга.
* \param r параметр - радиус.
* \return площадь круга.
*/

const double GetCircle(double r);

/**
* \brief ввод параметров.
* \param message разъясняющая надпись.
* \return значение параметра.
*/

double ReadSide(const string& message = "");

/**
* \brief
* \param message
* \return
*/

Figure ReadUserChoice(const string& message = "");

/**
* \brief вход в программу.
* \return код ошибки, если 0 - успешно.
*/

int main()
{
setlocale(LC_ALL, "Russian");

const auto message = "выберите, что необходимо посчитать("
+ to_string(static_cast<int>(Figure::circle)) + " - площадь круга, "
+ to_string(static_cast<int>(Figure::trapezoid)) + " - площадь трапеции):";

const auto Figure = ReadUserChoice(message);

switch (Figure)
{
case Figure::circle:
{
const auto r = ReadSide("введите радиус круга = ");
const auto Square_Circle = GetCircle(r);
cout « "площадь круга = " « Square_Circle « endl;
break;
}
case Figure::trapezoid:
{
double z = 0, quantity = 0;
const auto a = ReadSide("введите первое основание трапеции = ");
const auto b = ReadSide("введите второе основание трапеции = ");
const auto h = ReadSide("введите высоту трапеции = ");
const auto Square_Trapezoid = GetTrapezoid(a, b, h);
cout « "площадь трапеции = " « Square_Trapezoid « endl;
break;
}
default:
cout « "ошибка!";
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
