#include <iostream>
#include <string>
#include "utils.h"

std::string getName(int num)
{
    std::string name {};

    std::cout << "Enter the name of person #" << num << ": ";
    std::getline (std::cin >> std::ws, name);

    return name;
}

int getAge (std::string name)
{
    int age {};

    std::cout << "Enter the age of " << name << ": ";
    std::cin >> age;

    return age;
}

void printResult (std::string nameOne, int ageOne, std::string nameTwo, int ageTwo)
{
    
    if (ageOne > ageTwo)
    {
        std::cout << nameOne << " (" << ageOne << ") is older than " << nameTwo << " (" << ageTwo << ")"; 
    }
    else
    {
        std::cout << nameTwo << " (" << ageTwo << ") is older than " << nameOne << " (" << ageOne << ")"; 
    }
}