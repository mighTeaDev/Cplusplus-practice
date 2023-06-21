#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//One of the ways to accept user input into arrays

int main()
{
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[1]);
    std::string temp; 

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << "\n";
    }
return 0;
}