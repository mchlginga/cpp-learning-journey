// 2. have the program output the height of the ball above the ground after 0-5 seconds.
// 3. the ball should not go underneath the ground 0.
// 4. use a function to calculate the height of the ball after x seconds.
// 5. the function can calculate how far the ball has faller after x seconds using the following formula distance fallen = gravity constant * seconds squared / 2

#include <iostream>

double getHeight ();
double calculateAndPrint (double, int)

int main ()
{
    double height { getHeight() };

    double calculateAndPrint {height, 0};
    double calculateAndPrint {height, 1};
    double calculateAndPrint {height, 2};
    double calculateAndPrint {height, 3};
    double calculateAndPrint {height, 4};
    double calculateAndPrint {height, 5};

    return 0;
}

double getHeight ()
{
    double height {};

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;

    return height;
}

void calculate (double height, int seconds)
{
    double gravity {9.8};
    double fallDistance { gravity * (seconds * seconds) / 2.0};
    double ballheight { height - fallDistance};

        if (ballheight < 0.0)
        return 0.0;

    return ballheight;
}

void printBallheight (double height, int seconds)
{
    if (height > 0.0)
    {
        std::cout << "At " << seconds << " seconds, the ball is at height " << height << " meters" << '\n';
    }
    else 
    {
        std::cout << "At " << seconds << " seconds, the ball is on the ground" << '\n';
    }
}

void calculateAndPrint(double height, int seconds)
{
    double height { calculate (height, seconds)};
    printBallheight (height, seconds);
}
