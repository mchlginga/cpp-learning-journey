#include <iostream>

namespace Math
{
    int add (int a, int b)
    {
        return a + b;
    }
}

int add (int a, int b)
{
    return a + b;
}

int main ()
{
    std::cout << "Math::add: " << Math::add(3, 3) << '\n';

    std::cout << "Global add: " << add(3, 4) << '\n';

    return 0;
}