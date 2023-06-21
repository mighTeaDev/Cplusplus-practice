#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

// constructor = special method within a class that is automatically called when an object is instantiated
// useful for assigning values to attributes as arguments

//if class constructor arguments are different than the variable names, you dont need "this->"

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    Student student1("Spongebob", 25, 3.21);
    Student student2("Patrick", 28, 1.79);
    Student student3("Sandy", 26, 4.0);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";

    std::cout << student2.name << "\n";
    std::cout << student2.age << "\n";
    std::cout << student2.gpa << "\n";

    std::cout << student3.name << "\n";
    std::cout << student3.age << "\n";
    std::cout << student3.gpa << "\n";

return 0;
}