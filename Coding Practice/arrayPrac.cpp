#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//Arrays are data structures that can hold multiple values
//Values are accessed by an index number
//"A variable that holds multiple values" Kind of.

//Arrays start at index 0

void secondMethod();

int main()
{
    std::string car[] = {"Audi", "BMW", "Toyota", "Jeep", "Ford"};

    std::cout << car[1] << "\n";
    std::cout << car[2] << "\n";
    std::cout << car[4] << "\n";

    //You can reassign an index
    car[1] = "Ford\n";

    std::cout << car[1] << "\n";

    secondMethod();

return 0;
}

void secondMethod()
{
    std::string car[4];

    car[0] = "Chevy\n";
    car[1] = "Ford\n";
    car[2] = "Audi\n";
    car[3] = "BMW\n";

    //You can reassign an index

    std::cout << car[0];
    std::cout << car[1];
    std::cout << car[2];
    std::cout << car[3];
}