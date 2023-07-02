#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void doubleNum(int *a, int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        a[i] = 2*a[i];
        
    }
}

int main()
{
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    doubleNum(a, size);
    for(int i = 0; i < size; ++i)
    {
        std::cout << a[i] << std::endl;
    }
return 0;
}