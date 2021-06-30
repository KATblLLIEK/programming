#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

/**
* \brief ������������ ���: ����� ������� ������� ����� ��� �������� .
*/

enum class Figure
{
/**
* \brief ����������� ���������������� �����.
*/
none,

/**
* \brief ������� ������ - ����.
*/
circle,

/**
* \brief ������� ������ - ��������.
*/
trapezoid
};

/**
* \brief ������� ��� ������� ������� ��������.
* \param a �������� ��������� a.
* \param b �������� ��������� b.
* \param h �������� ������ h.
* \return ������� ��������.
*/

double GetTrapezoid(double a, double b, double h);

/**
* \brief ������� ��� ������� ������� �����.
* \param r �������� - ������.
* \return ������� �����.
*/

double GetCircle(double r);

/**
* \brief ���� �������� ����������.
* \param message ������������ �������.
* \return �������� ���������.
*/

double ReadSide(const string& message = "");

/**
* \brief
* \param message
* \return
*/

Figure ReadUserChoice(const string& message = "");

/**
* \brief ����� ����� � ���������.
* \return ��� ������, ���� 0 - �������� ����������.
*/

int main()
{
setlocale(LC_ALL, "Russian");

const auto message = "��������, ��� ����� ���������("
+ to_string(static_cast<int>(Figure::circle)) + " - ������� �����, "
+ to_string(static_cast<int>(Figure::trapezoid)) + " - ������� ��������):";

const auto Figure = ReadUserChoice(message);

switch (Figure)
{

case Figure::circle:
{

const auto r = ReadSide("������� ������ ����� = ");
const auto Square_Circle = GetCircle(r);
cout � "������� ����� = " � Square_Circle � endl;

break;
}

case Figure::trapezoid:
{
double z = 0, quantity = 0;

const auto a = ReadSide("������� ������ ��������� �������� = ");
const auto b = ReadSide("������� ������ ��������� �������� = ");
const auto h = ReadSide("������� ������ �������� = ");
const auto Square_Trapezoid = GetTrapezoid(a, b, h);
cout � "������� �������� = " � Square_Trapezoid � endl;
break;
}
default:
cout � "������!";
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
cout � message;
double side;
cin � side;
return side;
}

Figure ReadUserChoice(const string& message)
{
cout � message ;
int userInput;
cin � userInput;
return static_cast<Figure>(userInput);
}
