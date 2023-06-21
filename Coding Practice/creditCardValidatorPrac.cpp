#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//const parameter = parameter that is effectively read-only
// good for security and conveys intent
// useful for references and pointers

//Test visa #4012888888881881
//>Luhns Algorithm<
//Double ever second digit right to left
//If doubles number is 2 digits, split them
//Add all single digits from step 1
//Add all odd numbered digits from right to left
//Sum results from steps 2 and 3
//If the sum of step 4 is divisible by 10, card is valid

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0){
        std::cout << "Card number is valid!";
    }
    else{
        std::cout << "Card number INVALID!";
    }

return 0;
}

int getDigit(const int number){
    return number % 10 + (number/10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() -1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }

    return sum;
}    
int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() -2; i >= 0; i-=2){
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}