#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance = 120.05;
    int choice = 0;
    do{
        std::cout << "------------------Kairo Bank-------------------\n";
        std::cout << "Enter your choice: \n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";

        std::cin >> choice;

        //Clears any unreadable entrys, prevents code cycling through
        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4: std::cout << "Thanks for visiting Kairo Bank!";
                break;
            default: std::cout << "Invalid Choice\n";
                break;
        }
    }while(choice != 4);

    
return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}
double deposit(){
    double amount = 0;
    std::cout << "Enter amount to be deposited: $";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid amount, you cannot enter negative dollars.\n";
        return 0;
    }
    
}
double withdraw(double balance){
    double amount = 0;

    std::cout << "Amount you are withdrawing: $";
    std::cin >> amount;

    if(amount > 0 && amount < balance){
        return amount;
    }
    else{
        std::cout << "Invalid amount, you cannot enter negative dollars.\n";
        return 0;
    }
}