#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//pointers are variables that store memory addresses of other variables
//sometimes its easier to work with an address
//"tell people where the pizza is, rather than carry it around one by one"
//& address of operator,  * dereference operator

using namespace std;

int main()
{
    string name = "Kairo";
    int age = 24;
    std::string freePizza[5] = {"pizza 1", "pizza 2", "pizza 3", "pizza 4", "pizza 5"};

    int *pAge = &age;
    string *pName = &name;
    string *pFreePizza = freePizza;


    cout << *pName << "\n";
    cout << *pAge << "\n";
    cout << *freePizza << "\n";
return 0;
}