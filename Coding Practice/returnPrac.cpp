#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//return will return a value back to the spot where you called the encompassing function

double square(double length);
double cube(double length);

int main()
{
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << area << "cm^2 is the area\n";
    std::cout << volume << "cm^3 is the volume\n";

return 0;
}

double square(double length)
{
    double result = length * length;
    return result;
    //Or just return length * length
}

double cube(double length)
{
    return length*length*length;
}