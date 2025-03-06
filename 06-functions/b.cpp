// function return values

#include <iostream>

int return1()
{
    return 1;
}

int return9()
{
    return 9;
}

int main ()
{
    int add = return1() + return9();

    std::cout << add;

    return 0;
}