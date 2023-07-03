#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//If i were to remove the delete[] it would cause a memory leak by storing
//continuous card arrays to the heap. This would cause the program to crash eventually.

int cash = 100;

void Play(int bet){
    srand(time(NULL));
    char *Cards = new char[100000];
    Cards[0] = 'J';
    Cards[1] = 'Q';
    Cards[2] = 'K';
    std::cout << "Shuffling..." << std::endl;
    for(int i = 0; i < 5; i++){
        int x = rand() % 3;
        int y = rand() % 3;
        int temp = Cards[x];
        Cards[x] = Cards[y];
        Cards[y] = temp;
    }

    int playerGuess;
    std::cout << "What's the position of the queen? 1, 2, or 3? ";
    std::cin >> playerGuess;
    if(Cards[playerGuess - 1] == 'Q'){
        cash += 3 * bet;
        std::cout << "You win! You now have $" << cash << std::endl;
    }
    else{
        cash -= bet;
        std::cout << "You lose! You now have $" << cash << std::endl;
    }
    delete[] Cards;
}

int main()
{
    int bet;
    std::cout << "Welcome to the game of Three Card Monte!" << std::endl;
    while(cash > 0){
        std::cout << "You have $" << cash << ". How much would you like to bet? ('n' to quit) ";
        std::cin >> bet;
        if(bet > cash || bet == 0){
            std::cout << "You can't bet more than you have." << std::endl;
            break;
        }
        Play(bet);
        std::cout << "------------------------" << std::endl;
        
    }
return 0;
}