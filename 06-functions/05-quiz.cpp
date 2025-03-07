#include <iostream>

// double the number
int doubleNumber(int num)
{
    return num * 2;
}

// show the result
void result (int doubled, int num)
{
    std::cout << "Double " << num << " is: " << doubled;
}

int main ()
{
    int num{};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << '\n';

    doubleNumber(num);
    int doubled = doubleNumber(num);

    result(doubled, num);
}