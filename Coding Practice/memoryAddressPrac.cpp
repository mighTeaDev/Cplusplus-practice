#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//Memory addresses are locations where data is stored in memory
//Memory addresses can be accessed with the "&" operator
//                                        (Address-of operator)


int main()
{
    std::string name = "Kairo";
    int age = 21;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &student << "\n";
    std::cout << &age << "\n";


return 0;
}