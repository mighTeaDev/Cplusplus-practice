#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

// int increment(int a)
// {
//     a = a+1;
//     return a;
// }

// int main()
// {
//     int a;
//     a = 10;
//     int b = increment(a);
//     std::cout << b << std::endl;

// return 0;
// }

void increment(int *a)
{
    *a = *a+1;
}

int main()
{
    int a;
    a = 10;
    increment(&a);
    std::cout << a << std::endl;

return 0;
}