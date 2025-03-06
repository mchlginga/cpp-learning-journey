// void function non returning values

#include <iostream>

void doB()
{
    std::cout << "In doB Function" << '\n';
}

void doA()
{
    std::cout << "In doA Function" << '\n';

    doB();
}

int main ()
{
    std::cout << "Starting Main()" << '\n';

    doA();
    doB();

    std::cout << "Ending Main()" << '\n';

    return 0;
}