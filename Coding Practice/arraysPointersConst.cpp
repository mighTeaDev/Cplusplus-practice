#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//if i pass it in as constant, i can make it unchangeable in print function (i.e. cptr[0] = 'a' will not work)
void print(char *cptr){
    while(*cptr != '\0'){
        std::cout << *cptr;
        cptr++;
    }
    std::cout << std::endl;
}

int main()
{
    char c[6] = "Hello";
    print(c);

return 0;
}