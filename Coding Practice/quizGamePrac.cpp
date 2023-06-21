#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

int main()
{
    std::string questions[] = {"1. Who was the United State's first president?", 
                                "2. What year was the United States founded? ",
                                "3. From what direction does the sun rise?",
                                "4. What element does manure spread across farm fields to replenish soil?",
                                "5. Who invented C++?"};

    std::string options[][4] = {{"A. George Washington", "B. George Bush", "C. Abraham Lincoln", "D. Sir Taxwalt"},
                                {"A. 1670", "B. 1812", "C. 1776", "D. 1917"},
                                {"A. North", "B. South", "C. East", "D. West"},
                                {"A. Nitrogen", "B. Carbon", "C. Oxygen", "D. Hydrogen"},
                                {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"}};

    char answerkey[] = {'D', 'C', 'C', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[1]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        std::cout << "---------------------------------------------\n";
        std::cout << questions[i] << "\n";
        std::cout << "---------------------------------------------\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << "\n";
        }
        std::cout << "A, B, C, or D: ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]){
            std::cout << "CORRECT!\n";
            score++;
        }
        else{
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerkey[i] << "\n";
        }
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "Thanks for playing, your score is: " << score << "/5\n";
    std::cout << "                                   " << ((score/(double)size)*100) << "%\n";
    std::cout << "---------------------------------------------\n";
return 0;                           
}