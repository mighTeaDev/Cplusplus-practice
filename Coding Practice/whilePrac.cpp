#include <iostream>
#include <string>
#include <cmath>

//while loops are like if statements that can keep code running indefinitely
//good for keeping program running while seeking user input

int main()
{
    std::string name;

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;

return 0;
}