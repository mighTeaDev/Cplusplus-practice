#include <iostream>
#include <cmath>


int main()
{

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "--------------Calculator-----------------\n";
    
    std::cout << "Enter your first number: ";
    std::cin >> num1;

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1+num2;
            std::cout << "result: " << result <<"   <---\n";
            break;
        case '-':
            result = num1-num2;
            std::cout << "result: " << result <<"   <---\n";
            break;
        case '*':
            result = num1*num2;
            std::cout << "result: " << result <<"   <---\n";
            break;
        case '/':
            result = num1/num2;
            std::cout << "result: " << result <<"   <---\n";
            break;
        default:
            std::cout << "Error: Please enter valid operator.\n";
    }

    std::cout << "------------------------------------------";

return 0;
}