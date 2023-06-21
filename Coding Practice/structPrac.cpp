#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

struct student{
    std::string name;
    int age;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student student1;
    student1.name = "Spongebob";
    student1.age = 18;
    student1.gpa = 2.65;
    student1.enrolled = true;

    student student2;
    student2.name = "Patrick";
    student2.age = 18;
    student2.gpa = 1.9;
    student2.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

return 0;
}