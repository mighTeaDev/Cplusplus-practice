#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//Local Variables are declared inside of a function or block{}
//Global Variables are declared outside of all functions (typically at the top)
//Best to avoid global if possible (Security, name availability)
//:: Scope resolution operator (::) makes variable refer to global variant

int myNum = 3;


void printNum();

int main()
{
    printNum();

return 0;
}

void printNum()
{
    //2 will be ignored becuase of scope operator forcing myNum to global variant
    int myNum = 2;
    std::cout << ::myNum;
}