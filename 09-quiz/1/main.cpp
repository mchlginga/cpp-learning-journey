#include <iostream>

int readNumber(int, int);

int main ()
{
    int numOne{}, numTwo{};

    readNumber(numOne, numTwo);

    std::cout << numOne << " " << numTwo;

    return 0;
}

int readNumber(int numOne, int numTwo)
{
    std::cout << "Enter first integer: ";
    std::cin >> numOne;

    std::cout << "Enter second integer: ";
    std::cin >> numTwo;

    return numOne, numTwo;
}