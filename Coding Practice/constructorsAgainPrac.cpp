#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    Car car1("Chevy", "Corvette", 2022, "Ocean Blue");
    Car car2("Ford", "Raptor", 2021, "Red and Black");

    std::cout << car1.make << "\n";
    std::cout << car1.model << "\n";
    std::cout << car1.year << "\n";
    std::cout << car1.color << "\n";

    std::cout << car2.make << "\n";
    std::cout << car2.model << "\n";
    std::cout << car2.year << "\n";
    std::cout << car2.color << "\n";

return 0;
}