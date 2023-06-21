#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};
int main()
{   
    double side;
    double radius;

    std::cout << "Enter the length of a side of your cube: ";
    std::cin >> side;
    std::cout << "\n";
    Cube cube1(side);

    std::cout << "Cube Area: " << cube1.area << "cm^2\n";
    std::cout << "Cube Volume: " << cube1.volume << "cm^3\n";
    std::cout << "\n";

    std::cout << "Now, enter the radius of your sphere: ";
    std::cin >> radius;
    std::cout << "\n";
    Sphere sphere1(radius);

    std::cout << "Sphere Area: " << sphere1.area << "cm^2\n";
    std::cout << "Sphere Volume: " << sphere1.volume << "cm^3\n";
    std::cout << "\n";
    

return 0;
}