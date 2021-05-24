#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

/**
* \brief перечислимый тип: выбор расчЄта площади круга или трапеции .
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
* \brief ¬ыбрана трапеци€.
*/
trapezoid
};

/**
* \brief функци€ расчета площади трапеции.
* \param a параметр основани€ a.
* \param b параметр основани€ b.
* \param h параметр высоты h.
* \return площадь трапеции.
*/

double GetTrapezoid(double a, double b, double h);

/**
* \brief функци€ расчета площади круга.
* \param r параметр - радиус.
* \return площадь круга.
*/

double GetCircle(double r);

/**
* \brief ввод параметров.
* \param message разъ€сн€юща€ надпись.
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
cout Ђ "площадь круга = " Ђ Square_Circle Ђ endl;

break;
}

case Figure::trapezoid:
{
double z = 0, quantity = 0;

const auto a = ReadSide("введите первое основание трапеции = ");
const auto b = ReadSide("введите второе основание трапеции = ");
const auto h = ReadSide("введите высоту трапеции = ");
const auto Square_Trapezoid = GetTrapezoid(a, b, h);
cout Ђ "площадь трапеции = " Ђ Square_Trapezoid Ђ endl;
break;
}
default:
cout Ђ "ошибка!";
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
cout Ђ message;
double side;
cin ї side;
return side;
}

Figure ReadUserChoice(const string& message)
{
cout Ђ message ;
int userInput;
cin ї userInput;
return static_cast<Figure>(userInput);
