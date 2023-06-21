#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//PSEUDORANDOM = not truly random but close.
//below is code that imitates dice, srand is the seed, and null is the time of any current moment

int main()
{
    srand(time(NULL));
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n' << num2 << '\n' << num3 << '\n';

return 0;
}