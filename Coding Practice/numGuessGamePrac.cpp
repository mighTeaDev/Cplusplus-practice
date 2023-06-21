#include <iostream>
#include <string>
#include <cmath>
#include <ctime>



int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));

    num = rand() % 100 +1;

    std::cout << "------------- Number Guessing Game -------------\n";
        do{
            std::cout << "Enter a guess between 1-100: ";
            std::cin >> guess;
            tries++;

            if(guess > num){
                std::cout << "Your guess is too high\n";
            } 
            else if(guess < num){
                std::cout << "Your guess is too low\n";
            }
            else
            {
                std::cout << "YOU WIN!\n";
            }
        }
        while(guess != num);
        std::cout << "-------------------------------------------------";
return 0;
}