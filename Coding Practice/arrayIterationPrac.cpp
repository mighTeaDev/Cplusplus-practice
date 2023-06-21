#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void gradesExample();

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy", "Plankton"};

    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << "\n";
    }

    gradesExample();

return 0;
}

void gradesExample(){
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
    std::cout << grades[i] << "\n";
    }
}


