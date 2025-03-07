#include <iostream>

// forward declaration
int doubleNumber(int);
void result(int, int);

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

// function definition
int doubleNumber(int num)
{
    return num * 2;
}

void result(int num, int doubled)
{
    std::cout << "Double of " << num << " is: " << doubled;
}