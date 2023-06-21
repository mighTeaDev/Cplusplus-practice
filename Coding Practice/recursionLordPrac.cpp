#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//recursion is a programming technique where a function invokes itself from within
//it can break a complex concept into a repeatable single step
// iterative vs recursion
// advantages of recursion: cleaner, less code, useful for sorting and searching algorithms
// disadvantages of recursion: uses more memory and is slower

// void walk(int number);

// int main()
// {
//     int num = 0;
//     std::cin >> num;
//     walk(num);


// return 0;
// }

// void walk(int number){
//     if(number > 0){
//         walk(number - 1);
//     }
// }

void factorial(long double userInput, long double& result);

int main()
{
    long double userInput;
    std::cout << "Enter a number between 1-1754 you want to run through a factorial: \n";
    std::cin >> userInput;
    long double result = 1;
    factorial(userInput, result);
    std::cout << "The factorial of " << userInput << " is " << std::fixed << result << "\n";
return 0;
}

void factorial(long double userInput, long double& result){
    if(userInput > 1){

        factorial(userInput - 1, result);
        result *= userInput;
    }
}