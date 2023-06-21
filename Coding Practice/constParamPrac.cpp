#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//const parameter = parameter that is effectively read-only
// good for security and conveys intent
// useful for references and pointers

void printInfo(const std::string &name, const int &age);

int main()
{
    std::string name = "Kairo";
    int age = 24;
    printInfo(name, age);

return 0;
}

void printInfo(const std::string &name, const int &age){
    //testing whether this breaks the const
    //name = " ";
    //age = 0;
    std::cout << name << "\n";
    std::cout << age << "\n";
}