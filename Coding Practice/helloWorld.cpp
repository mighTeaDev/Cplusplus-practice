#include <iostream>
#include <string>

// This code is a fucking disaster

int main (){
    std::cout << "I like Hot Wings" << '\n';
    std::cout << "I like Donuts" << '\n';

    std::string userFood;
    std::cout << "Enter a food you like: ";
    std::getline(std::cin, userFood);
    std::cout << "I like " << userFood << " too!\n";
    return 0;
}
