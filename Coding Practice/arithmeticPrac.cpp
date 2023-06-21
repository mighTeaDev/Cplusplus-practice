#include <iostream>

//Arithmetic operators return the result of a specific operation like addition or division
//adds 5 students to variable students+=5;
//adds 1 students to variable  students++;
//subtracts 5 students to variable students-=5;
//subtracts 1 students to variable  students--;
//same pattern for multiplication and division (*=) (/=)
//modulus (%) gives remainder of any division, so students % 3 would return 2

int main(){

    int students = 20;
    students+=5;
    students-=5;
    int remainder = students % 3;

    std::cout << remainder;

return 0;
}