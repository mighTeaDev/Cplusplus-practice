#include <iostream>
#include <cmath>

// && = check if two conditions are true
// || = check if at least one of two conditions are true
// ! = reverses the logical state of its operand (what lol)

int main()
{
    int temp;

    std::cout << "Enter the temperature in: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!";
    }
    else
    {
        std::cout << "The temperature is bad!";
    }

return 0;
}

int main()
{
    int temp;

    std::cout << "Enter the temperature in: ";
    std::cin >> temp;

    if(temp > 0 || temp <= 30)
    {
        std::cout << "The temperature is good!\n";
    }
    else
    {
        std::cout << "The temperature is bad!\n";
    }

return 0;
}

int main()
{
    bool sunny = false;
    
    if(!sunny)
    {
        std::cout << "It is cloudy outside";
    }
    else
    {
        std::cout << "It is sunny outside";
    }

return 0;
}