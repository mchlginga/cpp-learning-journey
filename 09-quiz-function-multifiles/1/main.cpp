#include <iostream>

int readNumber ();
void writeAnswer(int);

int main ()
{
    int x = readNumber();
    int y = readNumber();

    int answer = x + y;

    writeAnswer(answer);

    return 0;
}

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