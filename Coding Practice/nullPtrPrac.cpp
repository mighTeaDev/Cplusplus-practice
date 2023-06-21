#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//Null value = a special value that means something has NO value
//When a pointer is holding a null value, that pointer is not pointing at anything at all
//nullptr = keyword representing a null pointer literal
//nullptr are good for determining if an address was successfully assigned to a pointer

//DO NOT * DEREFERENCE A NULLPTR OR POINTING TO FREE MEMORY
//PC MIGHT EXPLODE


int main()
{
    int *pointer = nullptr;
    int x = 123;

    //pointer = &x;

    if(pointer == nullptr){
        std::cout << "Null pointer";
    }
    else{
        std::cout << "Address assigned to pointer";
    }
        

return 0;
}