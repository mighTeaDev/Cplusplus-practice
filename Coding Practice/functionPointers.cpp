#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

int Add(int a, int b)
{
    return a + b;
}

int main()
{
    int c;

    int (*pAdd)(int, int);
    pAdd = &Add;
    c = pAdd(2,3); // * is optional

    std::cout << c << std::endl;

return 0;
}   