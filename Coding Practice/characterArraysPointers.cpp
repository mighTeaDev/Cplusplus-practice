#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//size of array >= size of string + 1

int main()
{
    char C[6] = "Hello";

    char* C2;
    C2 = C;

    char D[6];
    D[0] = 'H';
    D[1] = 'e';
    D[2] = 'l';
    D[3] = 'l';
    D[4] = 'o';
    D[5] = '\0';
    std::cout << C << std::endl;
    std::cout << D << std::endl;

return 0;
}