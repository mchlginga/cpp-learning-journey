#include <iostream>

int main ()
{
    std::string surname {};
    std::string firstname {};
    int age {};

    std::cout << "Enter your surname: ";
    std::cin >> surname;

    std::cout << "Enter your firstname: ";
    std::cin >> firstname;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << '\n';

    std::cout << "Hello " << surname << ", " << firstname << "! you are " << age << " years old.";

    return 0;
}