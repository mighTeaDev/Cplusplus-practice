#include <iostream>
#include <cmath>

//cout << (insertion operator)
//cin >> (extraction operator)

//cplusplus.com/reference/cmath

int main(){

    double x = 3;
    double y = 4;
    double z;

    z = pow(x,y);

    std::cout << z;

// which is greater function   z = std::max(x,y)
// which is lesser function    z = std::min(x,y)
// exponents, 2 to the power of 3   z = pow(2,3)
// square root    z = sqrt(9)
// absolute value    z = abs(-9)
// rounding z = round(x)
// rounding up/down z=ceil(x), z=floor(x)

return 0;
}