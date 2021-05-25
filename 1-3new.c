#define _USE_MATH_DEFINES // for C++

#include <cmath>
#include <iostream>

using namespace std;

double GetResistance(const double r1, const double r2, const double r3);


/**
*\brief ���� � ���������
*\return ���������� ����,���� �������
*/

int main()
{

/**
*\brief ������� �����
*\return ���������� ����,���� �������
*/

double r1;
cout � "Input the first resistance = ";
cin � r1;

double r2;
cout � "Input the second resistance = ";
cin � r2;

double r3;
cout � "Input the third resistance = ";
cin � r3;

cout � "\nResistance = " � GetResistance(r1,r2,r3);

return 0;

}

/**
*\brief �������������� �������������
*\param r1 �������� ������� �������������
*\param r2 �������� ������� �������������
*\param r3 �������� �������� �������������
*\return ���������� ����,���� �������
*/

double GetResistance(const double r1, const double r2, const double r3)
{
return (r1*r2*r3) / (r2*r3 + r1 * r3 + r1 * r2);
}
