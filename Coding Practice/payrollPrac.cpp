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
//
//find ways to improve code reusability between parent and child classes

#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <chrono>
#include <numeric>
#include <vector>

class Payment {
    private:
    double amount;
    time_t time;
    int employeeId;

    public:
    Payment(double amount, long int time, int employeeId) {
        this->amount = amount;
        this->time = time;
        this->employeeId = employeeId;
    }
    void setAmount(double amount){
        this->amount = amount;
    }
    double getAmount(){
        return amount;
    }
    time_t getTime(){
        return time;
    }
    int getEmployeeId(){
        return employeeId;
    }
};

class Employee {
    private:
    std::string name;
    int id;
    double wage;

    protected:
    Employee(std::string name, double wage){
        this->name = name;
        this->wage = wage;
        this->id = rand() % 1000 + 1;
    }

    public:
    void setName(std::string name){
        this->name = name;
    }

    std::string getName(){
        return name;
    }

    int getId() {
        return id;
    }
    Payment getPaid(time_t simulatedTime = NULL) {
        double hoursWorked = rand() % 8 + 1;
        return Payment(wage * hoursWorked, simulatedTime == NULL ? time(NULL) : simulatedTime, id);
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

class BankBalance {
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
    BankBalance balance;
    std::string continueInput;
    std::string userName;
    double grandTotal = 0;
    std::vector<Payment> payments;
    std::vector<Employee> employees{
        SoftwareDev("Dave Crazy"),
        SoftwareDev("Steve Minecraft"),
        Engineer("Craig Boolin"),
        Engineer("Adam Ineve"),
        Engineer("Timmy Idol"),
        Accountant("Sandra Bollocks"),
        Accountant("Michael Angelo"),
        AdminAsst("Charlie Hoares"),
        AdminAsst("Bonk Dogger"),
    };

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

    int simulatedYear = timeinfo->tm_year + 1900;
    int simulatedMonth = timeinfo->tm_mon + 1;
    int simulatedDay = timeinfo->tm_mday;

    std::pair<std::string, int> months[] = {
        std::make_pair("January", 31),
        std::make_pair("February", 28),
        std::make_pair("March", 31),
        std::make_pair("April", 30),
        std::make_pair("May", 31),
        std::make_pair("June", 30),
        std::make_pair("July", 31),
        std::make_pair("August", 31),
        std::make_pair("September", 30),
        std::make_pair("October", 31),
        std::make_pair("November", 30),
        std::make_pair("December", 31)
    };
    

    //Opening prompt
    std::cout << "-----------Kairo Payroll-----------\n";
    std::cout << "Please enter your name: \n";
    std::getline(std::cin, userName);
    std::cout << "-----------------------------------\n";
    std::cout << "Welcome, " << userName << '\n';
    std::cout << "You have signed in as a super user.\n";
    std::cout << "The current date is: " << simulatedYear << "-" << simulatedMonth << "-" << simulatedDay << std::endl;
    std::cout << "There are " << months[simulatedMonth - 1].second - simulatedDay << " days left in the month of " << months[simulatedMonth - 1].first << "\n";
    std::cout << "Our cash balance is: $" << std::fixed << std::setprecision(2) << balance.getBalance() << '\n';
    std::cout << "-----------------------------------\n";
    std::cout << "Would you like to sim a month in the system? (y/n)\n";
    std::cin >> continueInput;

    while(continueInput != "y" && continueInput != "n") {
        std::cout<< "----> Error, please enter 'y' or 'n' <----\n";
        std::cout << "Would you like to sim a month in the system? (y/n)\n";
        std::cin >> continueInput;
    }

    employees.push_back(ChiefOfficer(userName));
    
    //Begin program loop
    while(continueInput == "y" && balance.getBalance() >= 0) {
        // Calculate simulated time from current time
        std::time_t t = std::time(0);
        std::tm* now = std::localtime(&t);
        now->tm_mon = simulatedMonth - 1;
        now->tm_year = simulatedYear - 1900;
        now->tm_mday = 1;
        std::time_t future = std::mktime(now);

        // create payments for all employees for each day of the month and update grand total
        for(int day = 1; day <= months[simulatedMonth - 1].second; ++day) {
            for(auto employee : employees) {
                Payment employeePayment = employee.getPaid(future);
                grandTotal += employeePayment.getAmount();
                payments.push_back(employeePayment);
            }
        }

        long double functionalGrandTotal = grandTotal;
        long double functionalBalance = balance.getBalance();
        long double functionalIncome = rand() % 200000 + 50000;
        long double newBalance = functionalBalance - functionalGrandTotal + functionalIncome;
        balance.setBalance(newBalance);

        //print monthly costs, then prompt user to quit or sim again
        std::cout << "-----------------------------------\n";
        for (auto employee : employees) {
            double employeeMonthlyPay = 0;
            for(auto dailyPayment : payments) {
                time_t paymentTime = dailyPayment.getTime();
                std::tm* timeinfo = std::localtime(&paymentTime);
                int paymentMonth = timeinfo->tm_mon + 1;
                int paymentYear = timeinfo->tm_year + 1900;

                bool paymentIsFromThisMonth = paymentMonth == simulatedMonth && paymentYear == simulatedYear;
                bool paymentIsForThisEmployee = dailyPayment.getEmployeeId() == employee.getId();
                if (paymentIsForThisEmployee && paymentIsFromThisMonth) {
                    employeeMonthlyPay += dailyPayment.getAmount();
                }
            }
            std::cout << "$" << employeeMonthlyPay << " earned by " << employee.getName() << " last month.\n";
        }
        std::cout << "-----------------------------------\n";
        std::cout << "It is now " << simulatedMonth << "-" << simulatedDay<< "-" << simulatedYear << " (" << months[simulatedMonth - 1].first << ")" << std::endl;
        std::cout << "There are " << months[simulatedMonth - 1].second - simulatedDay << " days left this month\n";
        std::cout << "Last month we made: $" << functionalIncome << std::endl;
        std::cout << "Last month labor costed: $" << std::fixed << std::setprecision(2) << grandTotal << std::endl;
        std::cout << "For a difference of : $" << functionalIncome - grandTotal << std::endl;
        std::cout << "Our new balance is: $" << balance.getBalance() << std::endl;
        if((functionalIncome - grandTotal) > 0){
            std::cout << "It was a good month, we MADE MONEY!\n";
        }
        else{
            std::cout << "It was a bad month, we LOST MONEY\n";
        }
        std::cout << "-----------------------------------\n";

        //reset the grandtotal counter
        grandTotal = 0;
        simulatedMonth++;
        if(simulatedMonth > 12){
            simulatedMonth = 1;
            simulatedYear++;
        }

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