//Payroll system

//Once per simulated month, deposit of a paycheck summing prior days within a range of days that month. 
//Depending on randomly generated work hours per employee, they are paid according to their class(occupation)
//This allows each user to use a getPaid() function while accepting different rates/arguments
//Super user (assumed) should be able to view the rates being paid out before finalizing payment
//Using a fake company bank account, remove funds for payment, and add random income per month
//Show user results
//Would you like to simulate another month (y/n)
//n closes program, y continues payroll sim


//improvements list:
//write better function for getting totals then clearing them
//integrate mock calendar instead of 31 day array
//find ways to improve code reusability between parent and child classes

#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <format>
#include <chrono>
#include <numeric>
#include <vector>

class Employee {
    protected:
    std::string name;
    double wage;
    Employee(std::string name, double wage){
        this->name = name;
        this->wage = wage;
    }
    public:
    void setName(std::string name){
        this->name = name;
    }
    std::string getName(){
        return name;
    }
    double getPaid(){
        double hoursWorked = rand() % 8 + 1;
        return wage * hoursWorked;
    }
};

class SoftwareDev : public Employee {
    public:
    SoftwareDev(std::string name): Employee(name, 65.22){}
};

class Engineer : public Employee{
    public:
    Engineer(std::string name): Employee(name, 45.22){}
};

class Accountant : public Employee {
    public:
    Accountant(std::string name): Employee(name, 35.22){}
};

class AdminAsst : public Employee{
    public:
    AdminAsst(std::string name): Employee(name, 25.22){}
};

class ChiefOfficer : public Employee{
    public:
    ChiefOfficer(std::string name): Employee(name, 135.22){}
};

class bankBalance {
    private:
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
    std::string monthName;

    //Creating an array of days in the month (31 days const for now, find mock calendar integration later)
    
    // Get the current system time
    std::time_t t_time = std::time(nullptr);

    // Update the time zone information
    std::tm* timeinfo = std::localtime(&t_time);
    std::time_t current_time = std::mktime(timeinfo);
    std::tm* local_timeinfo = std::localtime(&current_time);
    std::time_t utc_time = std::mktime(local_timeinfo);
    int userTimeZoneOffset = std::difftime(current_time, utc_time);
    if (local_timeinfo->tm_isdst > 0) {
        userTimeZoneOffset += 3600;  // Add 1 hour (3600 seconds) for daylight saving time
    }

    int currentYear = timeinfo->tm_year + 1900;
    int currentMonth = timeinfo->tm_mon + 1;
    int currentDay = timeinfo->tm_mday;
    int daysInMonth;
    
    if(currentMonth > 12){
            currentMonth = 1;
            currentYear++;
        }

        if(currentMonth == 1){
        std::vector<int> days;
        for(int i = 0; i < 31; ++i){
            days.push_back(i);
            }
        monthName = "January";
        daysInMonth = days.size();
        }
        else if(currentMonth == 2){
        std::vector<int> days;
            for(int i = 0; i < 28; ++i){
                days.push_back(i);
            }
        monthName = "February";
        daysInMonth = days.size();
        }
        else if(currentMonth == 3){
        std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "March";
        daysInMonth = days.size();
        }
        else if(currentMonth == 4){
        
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "April";
        daysInMonth = days.size();
        }
        else if(currentMonth == 5){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "May";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 6){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "June";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 7){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "July";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 8){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "August";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 9){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "September";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 10){        
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "October";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 11){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "November";
        daysInMonth = days.size();
        }    
        else{
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "December";
        daysInMonth = days.size();
        }
    

    //Opening prompt
    std::cout << "-----------Kairo Payroll-----------\n";
    std::cout << "Please enter your name: \n";
    std::getline(std::cin, userName);
    std::cout << "-----------------------------------\n";
    std::cout << "Welcome, " << userName << '\n';
    std::cout << "You have signed in as a super user.\n";
    std::cout << "The current date is: " << currentYear << "-" << currentMonth << "-" << currentDay << '\n';
    std::cout << "There are " << daysInMonth - currentDay << " days left in the month of " << monthName << "\n";
    std::cout << "Our cash balance is: $" << std::fixed << std::setprecision(2) << balance.getBalance() << '\n';
    std::cout << "-----------------------------------\n";
    std::cout << "Would you like to sim a month in the system? (y/n)\n";
    std::cin >> continueInput;

    while(continueInput != "y" && continueInput != "n"){
        std::cout<< "----> Error, please enter 'y' or 'n' <----\n";
        std::cout << "Would you like to sim a month in the system? (y/n)\n";
        std::cin >> continueInput;
    }

    //Naming Employees and assigning classes
    SoftwareDev softwareDev1("Dave Crazy");
    SoftwareDev softwareDev2("Steve Minecraft");

    Engineer engineer1("Craig Boolin");
    Engineer engineer2("Adam Ineve");
    Engineer engineer3("Timmy Idol");

    Accountant accountant1("Sandra Bollocks");
    Accountant accountant2("Michael Angelo");

    AdminAsst adminasst1("Charlie Hoares");
    AdminAsst adminasst2("Bonk Dogger");

    ChiefOfficer chiefofficer1(userName);

    
    //Begin program loop
    while(continueInput == "y" && balance.getBalance() >= 0){

        //iterate over each day in the month
        for(int i = 0; i < daysInMonth; ++i){
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
        long double functionalBalance = balance.getBalance();
        long double functionalIncome = rand() % 200000 + 50000;
        long double newBalance = functionalBalance - functionalGrandTotal + functionalIncome;
        balance.setBalance(newBalance);
        currentMonth++;
        if(currentMonth > 12){
            currentMonth = 1;
            currentYear++;
        }

        if(currentMonth == 1){
        std::vector<int> days;
        for(int i = 0; i < 31; ++i){
            days.push_back(i);
            }
        monthName = "January";
        daysInMonth = days.size();
        }
        else if(currentMonth == 2){
        std::vector<int> days;
            for(int i = 0; i < 28; ++i){
                days.push_back(i);
            }
        monthName = "February";
        daysInMonth = days.size();
        }
        else if(currentMonth == 3){
        std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "March";
        daysInMonth = days.size();
        }
        else if(currentMonth == 4){
        
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "April";
        daysInMonth = days.size();
        }
        else if(currentMonth == 5){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "May";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 6){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "June";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 7){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "July";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 8){
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "August";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 9){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "September";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 10){        
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "October";
        daysInMonth = days.size();
        }    
        else if(currentMonth == 11){
            std::vector<int> days;
            for(int i = 0; i < 30; ++i){
                days.push_back(i);
            }
        monthName = "November";
        daysInMonth = days.size();
        }    
        else{
            std::vector<int> days;
            for(int i = 0; i < 31; ++i){
                days.push_back(i);
            }
        monthName = "December";
        daysInMonth = days.size();
        }
        
        if(currentMonth == 1){
        monthName = "January";
        }
        else if(currentMonth == 2){
        monthName = "February";
        }
        else if(currentMonth == 3){
        monthName = "March";
        }
        else if(currentMonth == 4){
        monthName = "April";
        }
        else if(currentMonth == 5){
        monthName = "May";
        }    
        else if(currentMonth == 6){
        monthName = "June"; 
        }    
        else if(currentMonth == 7){
        monthName = "July";
        }    
        else if(currentMonth == 8){
        monthName = "August";
        }    
        else if(currentMonth == 9){
        monthName = "September";
        }    
        else if(currentMonth == 10){        
        monthName = "October";
        }    
        else if(currentMonth == 11){
        monthName = "November";
        }    
        else{
        monthName = "December";
        }

        //print monthly costs, then prompt user to quit or sim again
        std::cout << "-----------------------------------\n";
        std::cout << "$" << total1 << " earned by " << softwareDev1.getName() << " last month.\n";
        std::cout << "$" << total2 << " earned by " << softwareDev2.getName() << " last month.\n";
        std::cout << "$" << total3 << " earned by " << engineer1.getName() << " last month.\n";
        std::cout << "$" << total4 << " earned by " << engineer2.getName() << " last month.\n";
        std::cout << "$" << total5 << " earned by " << engineer3.getName() << " last month.\n";
        std::cout << "$" << total6 << " earned by " << accountant1.getName() << " last month.\n";
        std::cout << "$" << total7 << " earned by " << accountant2.getName() << " last month.\n";
        std::cout << "$" << total8 << " earned by " << adminasst1.getName() << " last month.\n";
        std::cout << "$" << total9 << " earned by " << adminasst2.getName() << " last month.\n";
        std::cout << "$" << total10 << " earned by " << chiefofficer1.getName() << " last month.\n";
        std::cout << "-----------------------------------\n";
        std::cout << "It is now " << currentMonth << "-" << currentDay<< "-" << currentYear << " (" << monthName << ")" << '\n';
        std::cout << "There are " << daysInMonth - currentDay << " days left this month\n";
        std::cout << "Last month we made: $" << functionalIncome << '\n';
        std::cout << "Last month labor costed: $" << std::fixed << std::setprecision(2) << grandtotal << '\n';
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
        while(continueInput != "y" && continueInput != "n"){
        std::cout<< "----> Error, please enter 'y' or 'n' <----\n";
        std::cout << "Would you like to sim a month in the system? (y/n)\n";
        std::cin >> continueInput;
    }
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
system("pause");
return 0;    
}