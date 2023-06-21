#include <iostream>
#include <cmath>

//if statements = do something if condition is true, otherwise dont


int main(){

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age > 100){
        std::cout << "False age entered, you have been banned";
    }
    else if(age <0){
        std::cout << "False age entered, you have been banned";
    }
    else if(age >= 18){
        std::cout << "Welcome to the website";
    }
    else{
        std::cout << "You are not old enough to enter";
    }

return 0;
}