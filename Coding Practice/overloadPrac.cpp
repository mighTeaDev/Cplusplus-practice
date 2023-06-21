#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//return will return a value back to the spot where you called the encompassing function
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
    bakePizza("pepperoni", "onion");
return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza";
}

//the set of parameters with a functions name, is its signature. it must be unique.
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza";
}
void bakePizza(std::string topping1, std::string topping2)
{
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza";
}