// include header file
#include <iostream>
#include "math-functions.h" 

// function definitions
int doubleNumber(int num)
{
    return num * 2;
}

void result(int num, int doubled)
{
    std::cout << "Double of " << num << " is: " << doubled;
}