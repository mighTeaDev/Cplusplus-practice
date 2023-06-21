#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

// overloaded constructors are multiple constructors with the same name but different parameters
// allows for varying arguments when instantiating an object

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    Pizza(){
        
    }
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main()
{
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Pepperoni", "Mushroom");
    Pizza pizza3;

    std::cout << "You ordered the " << pizza2.topping1 << pizza2.topping2 << " pizza!";

return 0;
}