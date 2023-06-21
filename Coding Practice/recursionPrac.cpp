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

void walk(int steps);

int main()
{
    int userSteps;
    userSteps = 0;
    std::cout << "Enter an amount of steps to take: \n";
    std::cin >> userSteps;
    walk(userSteps);

return 0;
}

int walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}