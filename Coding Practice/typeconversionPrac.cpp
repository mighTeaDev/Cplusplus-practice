#include <iostream>

//Type conversion is the conversion of one data type to another
//Implicit = automatic
//Explicit = precede value with new data type


int main(){

    //explicitly casts pi as an integer, 
    //but stores it as a double so it can be operated to a decimal level
    // double x = (int) 3.14;
    //std::cout << x;

    //implicitly prints 100 as a single character, which 100 refences to "d"
    //char y = 100;
    //std::cout << y;

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

return 0;
}