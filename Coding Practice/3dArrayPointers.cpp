#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void Func(int (*cPtr)[2][2]){

}

int main()
{
    int c[3][2][2]  = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
        std::cout << c << std::endl << *c << std::endl << c[0] << std::endl << &c[0][0] << std::endl; //prints address of first element of c
        std::cout << *(c[0][0]+1) << std::endl; //prints value of second element of first element of first element of c
        std::cout << *(c[0][1]) << std::endl; //prints value of first element of second element of first element of c
        //std::cout << *(c[0][1]+1) << std::endl; //prints value of second element of second element of first element of c
        std::cout << *(c[1][0]) << std::endl; //prints value of first element of first element of second element of c
        std::cout << *(c[1][0]+1) << std::endl; //prints value of second element of first element of second element of c
        std::cout << *(c[1][1]) << std::endl; //prints value of first element of second element of second element of c
        std::cout << *(c[1][1]+1) << std::endl; //prints value of second element of second element of second element of c
        std::cout << *(c[2][0]) << std::endl; //prints value of first element of first element of third element of c
        std::cout << *(c[2][0]+1) << std::endl; //prints value of second element of first element of third element of c
        std::cout << *(c[2][1]) << std::endl; //prints value of first element of second element of third element of c
        std::cout << *(c[2][1]+1) << std::endl; //prints value of second element of second element of third element of c
        std::cout << std::endl;

        Func(c);

return 0;
}