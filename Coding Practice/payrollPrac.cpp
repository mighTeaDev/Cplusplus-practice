//Payroll system

//Once per simulated month, deposit of a paycheck summing prior days within a range of days that month. 
//Depending on randomly generated work hours per employee, they are paid according to their class(occupation)
//This allows each user to use a getPaid() function while accepting different rates/arguments
//Super user (assumed) should be able to view the rates being paid out before finalizing payment
//Using a fake company bank account, remove funds for payment, and add random income per month
//Show user results
//Would you like to simulate another month (y/n)
//n closes program, y continues payroll sim

#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>

class Employee {
    protected:
    std::string name;

    public:
    void setName(std::string name){
        this->name = name;
    }
    std::string getName(){
        return name;
    }
};

class SoftwareDev : public Employee {
    private:
    double hoursWorked = (rand() % 8 + 1);
    double wage = 65.52;

    public:
    double getPaid(){
        return wage * (rand() % 8 + 1);
    }

};

class Engineer : public Employee{
    private:
    double hoursWorked = (rand() % 8 + 1);
    double wage = 45.22;

    public:
    double getPaid(){
        return wage * (rand() % 8 + 1);
    }
};

class Accountant : public Employee {
    private:
    double hoursWorked = (rand() % 8 + 1);
    double wage = 34.62;

    public:
    double getPaid(){
        return wage * (rand() % 8 + 1);
    }
};

class AdminAsst : public Employee{
    private:
    double hoursWorked = (rand() % 8 + 1);
    double wage = 22.30;

    public:
    double getPaid(){
        return wage * (rand() % 8 + 1);
    }
};

class ChiefOfficer : public Employee{
    private:
    double hoursWorked = (rand() % 8 + 1);
    double wage = 250.00;

    public:
    double getPaid(){
        return wage * (rand() % 8 + 1);
    }
};

class bankBalance {
    protected:
    long double balance = 1000000;
    public:
    double getBalance(){
        return balance;
    }
    void setBalance(long double newBalance){
        this->balance = newBalance;
    }
};

int main(){
    srand(time(NULL));
    std::string continueInput;
    double payment1 = 0;
    double total1 = 0;
    double payment2 = 0;
    double total2 = 0;
    double payment3 = 0;
    double total3 = 0;
    double payment4 = 0;
    double total4 = 0;
    double payment5 = 0;
    double total5 = 0;
    double payment6 = 0;
    double total6 = 0;
    double payment7 = 0;
    double total7 = 0;
    double payment8 = 0;
    double total8 = 0;
    double payment9 = 0;
    double total9 = 0;
    double payment10 = 0;
    double total10 = 0;
    long double grandtotal = 0;
    bankBalance balance;
    std::string userName;


    //Opening prompt
    std::cout << "-----------Kairo Payroll-----------\n";
    std::cout << "Please enter your name: \n";
    std::getline(std::cin, userName);
    std::cout << "-----------------------------------\n";
    std::cout << "Welcome, " << userName << '\n';
    std::cout << "You have signed in as a super user.\n";
    std::cout << "Our cash balance is: $" << std::fixed << std::setprecision(2) << balance.getBalance() << '\n';
    std::cout << "-----------------------------------\n";
    std::cout << "Would you like to sim a month in the system? (y/n)\n";
    std::cin >> continueInput;
    while(continueInput != "y" && continueInput != "n"){
        std::cout<< "----> Error, please enter 'y' or 'n' <----\n";
        std::cout << "Would you like to sim a month in the system? (y/n)\n";
        std::cin >> continueInput;
    }

    //Creating an array of days in the month (31 days const for now, find mock calendar integration later)
    int days[31] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};

    //Naming Employees and assigning classes
    SoftwareDev softwareDev1;
    softwareDev1.setName("Dave Crazy");
    SoftwareDev softwareDev2;
    softwareDev2.setName("Steve Minecraft");

    Engineer engineer1;
    engineer1.setName("Craig Boolin");
    Engineer engineer2;
    engineer2.setName("Adam Ineve");
    Engineer engineer3;
    engineer3.setName("Timmy Idol");

    Accountant accountant1;
    accountant1.setName("Sandra Bollocks");
    Accountant accountant2;
    accountant2.setName("Michael Angelo");

    AdminAsst adminasst1;
    adminasst1.setName("Charlie Hoares");
    AdminAsst adminasst2;
    adminasst2.setName("Bonk Dogger");

    ChiefOfficer chiefofficer1;
    chiefofficer1.setName(userName);

    //Begin program loop
    while(continueInput == "y" && balance.getBalance() >= 0){

        //iterate over each day in the month
        for(int i = 0; i < sizeof(days)/sizeof(days[1]); ++i){
            payment1 = softwareDev1.getPaid();
            total1 += payment1;
            payment2 = softwareDev2.getPaid();
            total2 += payment2;
            payment3 = engineer1.getPaid();
            total3 += payment3;
            payment4 = engineer2.getPaid();
            total4 += payment4;
            payment5 = engineer3.getPaid();
            total5 += payment5;
            payment6 = accountant1.getPaid();
            total6 += payment6;
            payment7 = accountant2.getPaid();
            total7 += payment7;
            payment8 = adminasst1.getPaid();
            total8 += payment8;
            payment9 = adminasst2.getPaid();
            total9 += payment9;
            payment10 = chiefofficer1.getPaid();
            total10 += payment10;
            grandtotal += (payment1 + payment2 + payment3 + payment4 + payment5 + payment6 + payment7 + payment8 + payment9 + payment10);
            }

        long double functionalGrandTotal = grandtotal;    
        double functionalBalance = balance.getBalance();
        long double functionalIncome = rand() % 200000 + 50000;
        long double newBalance = functionalBalance - functionalGrandTotal + functionalIncome;
        balance.setBalance(newBalance);

        //print monthly costs, then prompt user to quit or sim again
        std::cout << "-----------------------------------\n";
        std::cout << "$" << total1 << " earned by " << softwareDev1.getName() << " this month.\n";
        std::cout << "$" << total2 << " earned by " << softwareDev2.getName() << " this month.\n";
        std::cout << "$" << total3 << " earned by " << engineer1.getName() << " this month.\n";
        std::cout << "$" << total4 << " earned by " << engineer2.getName() << " this month.\n";
        std::cout << "$" << total5 << " earned by " << engineer3.getName() << " this month.\n";
        std::cout << "$" << total6 << " earned by " << accountant1.getName() << " this month.\n";
        std::cout << "$" << total7 << " earned by " << accountant2.getName() << " this month.\n";
        std::cout << "$" << total8 << " earned by " << adminasst1.getName() << " this month.\n";
        std::cout << "$" << total9 << " earned by " << adminasst2.getName() << " this month.\n";
        std::cout << "$" << total10 << " earned by " << chiefofficer1.getName() << " this month.\n";
        std::cout << "-----------------------------------\n";
        std::cout << "This month we made: $" << functionalIncome << '\n';
        std::cout << "This month labor costed: $" << std::fixed << std::setprecision(2) << grandtotal << '\n';
        std::cout << "For a difference of : $" << functionalIncome - grandtotal << '\n';
        std::cout << "Our new balance is: $" << balance.getBalance() << '\n'; 
        if((functionalIncome - grandtotal) > 0){
            std::cout << "It was a good month, we MADE MONEY!\n";
        }
        else{
            std::cout << "It was a bad month, we LOST MONEY\n";
        }
        std::cout << "-----------------------------------\n";

        //reset the grandtotal counter
        grandtotal = 0;
        total1 = 0;
        total2 = 0;
        total3 = 0;
        total4 = 0;
        total5 = 0;
        total6 = 0;
        total7 = 0;
        total8 = 0;
        total9 = 0;
        total10 = 0;


        std::cout << "Sim another month? (y/n)\n";
        std::cin >> continueInput;
        }
    double checkBalanceForMoreThanZero = balance.getBalance();
    if(checkBalanceForMoreThanZero <= 0){
        std::cout << "-----------------------------------\n";
        std::cout << "WARNING: You have bankrupted the company and been kicked off the system\n";
        std::cout << "-----------------------------------\n";
    }
    if(continueInput == "n"){
        std::cout << "-----------------------------------\n";
        std::cout << "----------program closed.----------\n";
        std::cout << "-----------------------------------\n";
    }
return 0;    
}