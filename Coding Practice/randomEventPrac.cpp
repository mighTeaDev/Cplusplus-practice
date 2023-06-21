#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//PSEUDORANDOM = not truly random but close.
//below is code that imitates dice, srand is the seed, and null is the time of any current moment

int main()
{
    srand(time(NULL));
    int randNum = rand() % 5 + 1;

    switch(randNum)
    {
        case 1:
            std::cout << "You win a Ferrari";
            break;
        case 2:
            std::cout << "You win a free trip to Europe";
            break;
        case 3:
            std::cout << "You win a free movie";
            break;
        case 4:
            std::cout << "You win a new home";
            break;
        case 5:
            std::cout << "You win free burgers from McD's for life";
            break;
    }
    

return 0;
}