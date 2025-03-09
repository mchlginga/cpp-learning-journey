#include <iostream>
#include "utilities.h"

double getUserInput()
{
    double num {};

    std::cout << "Enter a double value: ";
    std::cin >> num;

    return num;
}

char getUserSymbol()
{
    char symbol {};

    std::cout << "Enter +, -, *, or /: ";
    std::cin >> symbol;

    return symbol;
}

void showResult(int x, int y, char symbol, int answer){
    std::cout << x << ' ' << symbol << ' ' << y << " is: " << answer;
}