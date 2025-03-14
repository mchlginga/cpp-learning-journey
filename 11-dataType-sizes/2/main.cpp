#include "utilities.h"

int main()
{
    double x { getUserInput() };
    double y { getUserInput() };
    char symbol { getUserSymbol() };
    
    int answer {};

    if (symbol == '+') 
    {
        answer = (x + y);
    }
    else if (symbol == '-')
    {
        answer = (x - y);
    }
    else if (symbol == '*')
    {
        answer = (x * y);
    }
    else if (symbol == '/')
    {
        answer = (x / y);
    }
    else{
        return 0;
    }

    showResult (x, y, symbol, answer);

    return 0;
}

