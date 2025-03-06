#include <iostream>

void personal_info(std::string surname, std::string firstname, int age)
{
    std::cout << surname << ' ' << firstname << ' ' << age;
}

int main ()
{
    personal_info("Do", "You Mind", 4);

    return 0;  
}