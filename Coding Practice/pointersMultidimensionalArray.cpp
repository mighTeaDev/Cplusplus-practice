#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//if B is my array name
// B[i][j] = *(B[i]+j) address
//         = *(*(B+i)+j) value


int main()
{
    int B[2][3] = {{1,2,3},{4,5,6}};
    int (*p)[3] = B; //pointer to an array of 3 integers
    std::cout << B << std::endl; //prints address of first element of B
    std::cout << *B << std::endl; //prints address of first element of B also
    std::cout << B+1 << std::endl; //prints address of second element of B
    std::cout << *(B+1) << std::endl; //prints address of second element of B also
    std::cout << *(*B) << std::endl; //prints value of first element of first element of B
    std::cout << *(*B+1) << std::endl; //prints value of second element of first element of B
    std::cout << *(*B+2) << std::endl; //prints value of third element of first element of B
    std::cout << *(*(B+1)) << std::endl; //prints value of first element of second element of B
    std::cout << *(*(B+1)+1) << std::endl; //prints value of second element of second element of B
    std::cout << *(*(B+1)+2) << std::endl; //prints value of third element of second element of B

return 0;
}