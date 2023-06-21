#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//function templates describe what a function looks like
//can be used to generate as many overloaded functions as needed
//each using different data types
template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x: y;
}

int main()
{
    std::cout << max(2,4.6) << '\n';

return 0;
}


