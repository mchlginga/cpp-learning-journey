#include "io.h"

int main ()
{
    int x = readNumber();
    int y = readNumber();

    int answer = x + y;

    writeAnswer(answer);

    return 0;
}