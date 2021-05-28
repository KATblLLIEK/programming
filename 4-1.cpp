#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <random>
#include <iomanip>

using namespace std;

/**
* \brief ���������� ������� ���������� �������
* \param array ������
* \param size ������ �������
* \param min ���������� ��������� �����
* \param max ����������� ��������� �����
**/
void RandomArray(int* array, const size_t size, const int min, const int max);

/**
* \brief ���� ������� � ����������
* \param array ������
* \param size ������ �������
**/
void UserArray(int* array, const size_t size);

/**
* \brief ����� ��������� � ��������� ���������
* \param array ������
* \param size ������ �������
**/
int SumNumbers(int* array, const size_t size);

/**
* \brief ���������� ���������(�������� ������� ������ �, ������ 5)
* \param array ������
* \param size ������ �������
* \param A �������� �� �������
**/
int NumberElements(int* array, const size_t size, int A);

/**
* \brief ����� ������(��� ������ �������� ������ �� ������ �������)
* \param array ������
* \param second_array ������������ ������
* \param size ������ �������
**/
void SecondArray(int* array, double* second_array, const size_t size);

enum class ArrayType
{
	RandomNumber = 1,
	UserNumber = 2
};

int main()
{
	cout.precision(3);
	cout << fixed;

	const int MIN = -10, MAX = 20;
	int sum, A;

	cout << "Please input array length: ";
	size_t size;
	cin >> size;

	cout << "Enter the number A by condition: ";
	cin >> A;

	int* array = new int[size];
	double* second_array = new double[size];

	cout << "\nChoose array:\n" << "1) Array with random number\n" << "2) Array with user number\n" << "1 or 2: ";
	int choice;
	cin >> choice;

	const auto arraytype = static_cast<ArrayType>(choice);

	switch (arraytype)
	{
	case ArrayType::RandomNumber:
	{
		RandomArray(array, size, MIN, MAX);
		break;
	}
	case ArrayType::UserNumber:
	{
		UserArray(array, size);
		break;
	}
	default:
		break;
	}

	cout << SumNumbers(array, size) << endl;

	cout << NumberElements(array, size, A) << endl;

	SecondArray(array, second_array, size);

	for (size_t i = 0; i < size; i++)
	{
		cout << "array[" << i << "] = " << second_array[i] << endl;
	}
	delete array;
	delete second_array;
}

void RandomArray(int* array, const size_t size, const int min, const int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	const uniform_int_distribution<> uniformIntDistribution(min, max);

	for (size_t i = 0; i < size; ++i)
		array[i] = uniformIntDistribution(gen);
	for (size_t i = 0; i < size; ++i)
	{
		cout << "array[" << i << "] = " << array[i] << endl;
	}
}

void UserArray(int* array, const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "array[" << i << "] = ";
		cin >> array[i];
	}
}

int SumNumbers(int* array, const size_t size)
{
	int sum = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (i % 2)
		{
			sum += array[i];
		}
	}
	return sum;
}

int NumberElements(int* array, const size_t size, int A)
{
	int num = 0;
	for (size_t i = 0; i < size; ++i)
	{
		if (array[i] > A && array[i] % 5 == 0)
		{
			num++;
		}
	}
	return num;
}

void SecondArray(int* array, double* second_array, const size_t size)
{
	double first = array[0];
	for (size_t i = 0; i < size; i++)
	{
		if (i % 2)
		{
			second_array[i] = array[i] / first;
		}
		else {
			second_array[i] = array[i];
		}
	}
}