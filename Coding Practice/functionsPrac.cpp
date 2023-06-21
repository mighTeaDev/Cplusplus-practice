#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//functions are blocks of re-usable code

//This calls the happy birthday function to the top
void happyBirthday(std::string name, int age);

//Convention keeps main at top of doc
int main()
{
    std::string name = "kairo";
    int age = 24;

    happyBirthday(name, age);

return 0;
}

//void(function type) functionName, then any shared information with main in () aka parameters
void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << "\n";
    std::cout << "Happy Birthday to "<< name << "\n";    
    std::cout << "Happy Birthday dear " << name << "\n";
    std::cout << "Happy Birthday to you" << "\n";
    std::cout << "You are now " << age << " years old!\n";
}

