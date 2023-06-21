#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//foreach loop is a loop that makes traversal over iterable data easier

void gradesExample();

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy", "Plankton"};

    for(std::string student : students){
        std::cout << student << "\n";

    }
    gradesExample();
return 0;
}

void gradesExample(){
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(char grade : grades){
    std::cout << grade << "\n";
    }
}