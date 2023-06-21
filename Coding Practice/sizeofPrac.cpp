#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//sizeof() = determines the size in bytes of a variable, data type, class, objects, etc.)

int main()
{
    float gpa = 2.5;
    double gpa2 = 2.5;
    std::string name = "hello world";
    char grade = 'f';
    bool student = true;
    char gradesArray[] = {'A', 'B', 'C', 'D', 'F' };
    std::string studentsArray[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};


    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(gpa2) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(gradesArray) << " bytes\n";
    std::cout << sizeof(gradesArray)/sizeof(char) << " grades in my array\n";
    std::cout << sizeof(studentsArray)/sizeof(std::string) << " students in my array\n";

return 0;
}