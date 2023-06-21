#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>



struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Corvette";
    car1.year = 2022;
    car1.color = "Burnt Orange";

    car2.model = "Camaro";
    car2.year = 2019;
    car2.color = "Sapphire Blue";
    paintCar(car1, "Cherakote Green");
    paintCar(car2, "Ocean Blue");
    std::cout << "--------------------------------\n";
    std::cout << "beginning memory address: " << &car1 << "\n";
    std::cout << "beginning memory address: " << &car2 << "\n";
    std::cout << "--------------------------------\n";
    printCar(car1);
    std::cout << "--------------------------------\n";
    printCar(car2);

return 0;
}

void printCar(Car &car){
    std::cout << &car << "\n";
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.color << "\n";
}

void paintCar(Car &car, std::string color){
    car.color = color;
}