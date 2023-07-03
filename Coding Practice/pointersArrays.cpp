#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     std::cout << a << std::endl;
//     std::cout << &a[0] << std::endl;
//     std::cout << a[0] << std::endl;
//     std::cout << *a << std::endl;
//     std::cout << a[1] << std::endl;

// return 0;
// }

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    ++p;

    for(int i = 0; i < 5; ++i)
    {
        std::cout << "The address: " << &a[i] << std::endl;
        std::cout << "The address: " << a+i << std::endl;
        std::cout << "The value: " << a[i] << std::endl;
        std::cout << "The value: " << *(a+i) << std::endl;
    }

return 0;
}