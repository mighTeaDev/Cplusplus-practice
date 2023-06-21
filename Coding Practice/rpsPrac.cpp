#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

char getuserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{
    char player;
    char computer;
    do{
    player = getuserChoice();
    std::cout << "Your choice was: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "The computer's choice was: ";
    showChoice(computer);    

    std::cout << "--------------------------\n";
    chooseWinner(player, computer);
    std::cout << "--------------------------\n";
    }while(player == computer);

return 0;
}

char getuserChoice(){
    char player;
    std::cout << "-----------Rock-Paper-Scissors Game--------\n";

    do{
    std::cout << "'r' for Rock\n";
    std::cout << "'P' for Paper\n";
    std::cout << "'S' for Scissors\n";
    std::cout << "-------------------------------------------\n";
    std::cout << "Enter your choice: ";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getComputerChoice(){
    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

    }
    return 0;
}
void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock\n";
            break;
        case 'p': std::cout << "Paper\n";
            break;
        case 's': std::cout << "Scissors\n";
            break;
    }


}
void chooseWinner(char player, char computer){
    switch(player){
        case 'r': if(computer == 'r'){
            std::cout << "It's a tie, go again!\n";
        }
        else if(computer == 'p'){
            std::cout << "You lose! Run the program to play again.\n";
        }
        else{
            std::cout << "You win! Run the program to play again.\n";
        }
        break;
    }

    switch(player){
        case 'p': if(computer == 'p'){
            std::cout << "It's a tie, go again!\n";
        }
        else if(computer == 's'){
            std::cout << "You lose! Run the program to play again.\n";
        }
        else{
            std::cout << "You win! Run the program to play again.\n";
        }
        break;
    }

    switch(player){
        case 's': if(computer == 's'){
            std::cout << "It's a tie, go again!\n";
        }
        else if(computer == 'r'){
            std::cout << "You lose! Run the program to play again.\n";
        }
        else{
            std::cout << "You win! Run the program to play again.\n";
        }
        break;
    }
}