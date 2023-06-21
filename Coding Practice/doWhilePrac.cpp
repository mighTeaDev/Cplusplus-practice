#include <iostream>
#include <string>
#include <cmath>

//do while loop = do some code first, then do it again if a condition is true
//good for keeping a program running until a user selects a leave game button

int main()
{
    int number;
        
    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "Your number is: " << number;

return 0;
}