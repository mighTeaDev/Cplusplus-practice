#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    swap(x,y);
    
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";
return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}