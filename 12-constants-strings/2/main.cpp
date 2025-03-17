#include "utils.h"
#include <string>

int main()
{
    std::string nameOne {getName(1)};
    int ageOne {getAge(nameOne)};
    std::string nameTwo {getName(2)};
    int ageTwo {getAge(nameTwo)};

    printResult(nameOne, ageOne, nameTwo, ageTwo);

    return 0;
}
