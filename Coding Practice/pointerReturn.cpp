#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void PrintHello()
{
    std::cout << "Hello" << std::endl;
}

int *Add(int *x, int *y)
{
    int* z = new int(sizeof(int));
    *z = *x + *y;
    return z;
}

int main()
{
    int x = 2;
    int y = 4;
    int *z = Add(&x,&y);
    PrintHello();
    std::cout << *z << std::endl;

return 0;
}