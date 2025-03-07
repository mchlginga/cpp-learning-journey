#include <iostream>
#include "math-functions.h"

int main ()
{
    int num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    doubleNumber(num);
    int doubled = doubleNumber(num);

    result(num, doubled);

    return 0;
}