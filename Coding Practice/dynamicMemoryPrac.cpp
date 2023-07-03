#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//dynamic memory = memory that is allocated after the program is compiled and running
//use the new operator to allocate memory in the heap rather than the stack
//useful when we dont know how much memory we will need
//makes programs more flexible, and good for accepting user input 


// int main()
// {
//     int *pNum = NULL;

//     pNum = new int;

//     *pNum = 21;

//     std::cout << "address: " << pNum << '\n';
//     std::cout << "address: " << *pNum << '\n';

//     delete pNum;

// return 0;
// }

int main(){

    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    char *pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";

    }

    delete[] pGrades;

return 0; 
}