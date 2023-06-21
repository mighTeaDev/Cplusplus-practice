#include <iostream>

int main(){

//integer stores whole numbers (Years, Days, Age)
    int x = 5;
    int y =6;
    int sum = x+y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

//double stores number and decimal ()
    double price = 69.99;
    double deluxePrice = 89.99;
    double ultimatePrice = 99.99 ;

    std::cout << ultimatePrice << '\n';

//char stores single character
    char grade = 'B';
    char currency = '$';

//boolean stores a true or false
    bool student = false;
    bool teacher = true;
    bool forSale = true;

//strings store sequences of text
    std::string name ="Jimmothy III";
    std::string day ="Wednesday";
    std::string address ="East Caelid";

//mixing data types to form outputs
    std::cout <<"Hello " << name << '\n';
    std::cout << "My name is " << name << " and I am here to cuck you on this fine " << day;

    return 0;
}