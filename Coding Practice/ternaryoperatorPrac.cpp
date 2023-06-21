#include <iostream>
#include <cmath>

//Ternary operator (?) replaces an if/else statement
// condition ? expression1 : expression 2;

int main()
{
    int grade = 50;
    //int grade = 80;
    grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!"; 

    //same as if i did if(grade >= 60) and else, but merged all to one line.

return 0;
}



    //int number = 9;
    //number % 2 ? std::cout << "Odd" : std::cout << "Even";

    //bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You are full";

