#include <iostream>

// used to get and return single integer from user
int readNumber ()
{
    int num {};

    std::cout << "Enter an integer: ";
    std::cin >> num;

    return num;
}

// writes the answer
void writeAnswer (int answer)
{
    std::cout << '\n' << "The answer is: " << answer << '\n';
}