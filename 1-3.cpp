#include <iostream>


/**
* \brief функция рассчёта общего сопротивления
* \param R1 - сопротивление 1 резистора
* \param R2 - сопротивление 2 резистора
* \param R3 - сопротивление 3 резистора
* \return общее сопротивление
**/


/**
* \brief точка входа
* \return Код ошибки, если 0, то успешно
* */
int main() {
    double r1, r2, r3;
    std::cout << "VVrite R1 "; std::cin >> r1;
    std::cout << "VVrite R2 "; std::cin >> r2;
    std::cout << "VVrite R3 "; std::cin >> r3;
    std::cout << The result is " << 1 / (1 / r1 + 1 / r2 + 1 / r3) << std::endl;
	return 0;
}



