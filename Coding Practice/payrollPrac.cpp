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
//find ways to improve code reusability between parent and child classes
//!FIX DATES NOT CHANGING ON SIMULATION

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
    void bankruptChecker(std::string &continueInput){
    if(balance <= 0){
        std::cout << "-----------------------------------\n";
        std::cout << "WARNING: You have bankrupted the company and been kicked off the system\n";
        std::cout << "-----------------------------------\n";
        continueInput = "n";
        }
    }
};

class DateHandler{
    private:
        void initializeTime(){
            std::time_t t_time = std::time(nullptr);
            std::tm* timeinfo = std::localtime(&t_time);
            std::time_t current_time = std::mktime(timeinfo);
            std::tm* local_timeinfo = std::localtime(&current_time);
            std::time_t utc_time = std::mktime(local_timeinfo);
            int userTimeZoneOffset = std::difftime(current_time, utc_time);
            if (local_timeinfo->tm_isdst > 0) {
                userTimeZoneOffset += 3600;  // Add 1 hour (3600 seconds) for daylight saving time
            }

            simulatedYear = timeinfo->tm_year + 1900;
            simulatedMonth = timeinfo->tm_mon + 1;
            simulatedDay = timeinfo->tm_mday;

        }

    public:
        DateHandler(){
            initializeTime();  
        }
        int simulatedYear;
        int simulatedMonth;
        int simulatedDay;

        std::pair<std::string, int> months[12] = 
            {std::make_pair("January", 31),
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
            std::make_pair("December", 31)};

        void incrementMonth(){
            if(simulatedMonth == 12){
                simulatedMonth = 1;
                simulatedYear++;
            }
            else{
                simulatedMonth++;
            }
        }
        void printDate(){
           std::cout << "The current date is: " << simulatedMonth << "-" << simulatedDay << "-" << simulatedYear << std::endl;
        }
        void printDaysLeftInMonth(){
            std::cout << "There are " << months[simulatedMonth - 1].second - simulatedDay << " days left in the month of " << months[simulatedMonth - 1].first << "\n";
        }
};

class UserInterface : public BankBalance, public DateHandler{
    public:
        void welcomeMessage(){
            std::cout << "-----------Kairo Payroll-----------\n";
            std::cout << "Please enter your name: \n";
        }
        std::string setUserName(std::string &userName){
            std::getline(std::cin, userName);
            return userName;
        }
        void login(std::string &userName){
            if(userName == "superuser"){
            std::cout << "-----------------------------------\n";
            std::cout << "Welcome, " << userName << '\n';
            std::cout << "You have signed in as a super user.\n";
            std::cout << "-----------------------------------\n";
            printDate();
            printDaysLeftInMonth();
            }
            else{
                std::cout << "-----------------------------------\n";
                std::cout << "Access Denied" << '\n';
                welcomeMessage();
                setUserName(userName);
                login(userName);
        }
        }
        void printBalance(){
            double balance = getBalance();
            std::cout << "Our cash balance is: $" << std::fixed << std::setprecision(2) << balance << '\n';
        }
        void askToSim(std::string &continueInput){
            std::cout << "-----------------------------------\n";
            std::cout << "Would you like to sim a month in the system? (y/n)\n";
            std::cin >> continueInput;

            while(continueInput != "y" && continueInput != "n") {
                std::cout<< "----> Error, please enter 'y' or 'n' <----\n";
                std::cout << "Would you like to sim a month in the system? (y/n)\n";
                std::cin >> continueInput;
                }
            closeProgram(continueInput);
        }
        void monthlyPrintOut(long double functionalIncome, long double grandTotal, long double &newBalance){
            std::cout << "-----------------------------------\n";
            //!NOT WORKING
            printDate();
            printDaysLeftInMonth();
            std::cout << "Last month we made: $" << functionalIncome << std::endl;
            std::cout << "Last month labor costed: $" << std::fixed << std::setprecision(2) << grandTotal << std::endl;
            std::cout << "For a difference of : $" << functionalIncome - grandTotal << std::endl;
            std::cout << "Our NEW cash balance is: $" << std::fixed << std::setprecision(2) << newBalance << '\n';
            if((functionalIncome - grandTotal) > 0){
            std::cout << "It was a good month, we MADE MONEY!\n";
            }
            else{
                std::cout << "It was a bad month, we LOST MONEY\n";
            }
        }
        void closeProgram(std::string &continueInput){
            if(continueInput == "n"){
                std::cout << "-----------------------------------\n";
                std::cout << "Thank you for using Kairo Payroll\n";
                std::cout << "-----------------------------------\n";
                exit(0);
            }
        }
};
int main(){

    //initialize variables/classes
    srand(time(NULL));
    DateHandler dateHandler;
    BankBalance balance;
    UserInterface userInterface;
    std::string continueInput;
    std::string userName;
    double grandTotal = 0;
    std::vector<Payment> payments;

    //initialize employees
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
    
    userInterface.welcomeMessage();
    userInterface.setUserName(userName);
    userInterface.login(userName);
    userInterface.printBalance();
    userInterface.askToSim(continueInput);
    employees.push_back(ChiefOfficer(userName));
    
    //Begin simulation loop
    while(continueInput == "y" && balance.getBalance() >= 0) {
        // Calculate simulated time from current time
        std::time_t t = std::time(0);
        std::tm* now = std::localtime(&t);
        now->tm_mon = dateHandler.simulatedMonth - 1;
        now->tm_year = dateHandler.simulatedYear - 1900;
        now->tm_mday = 1;
        std::time_t future = std::mktime(now);

        // create payments for all employees for each day of the month and update grand total
        for(int day = 1; day <= dateHandler.months[dateHandler.simulatedMonth - 1].second; ++day) {
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

                bool paymentIsFromThisMonth = paymentMonth == dateHandler.simulatedMonth && paymentYear == dateHandler.simulatedYear;
                bool paymentIsForThisEmployee = dailyPayment.getEmployeeId() == employee.getId();
                if (paymentIsForThisEmployee && paymentIsFromThisMonth) {
                    employeeMonthlyPay += dailyPayment.getAmount();
                }
            }
            std::cout << "$" << employeeMonthlyPay << " earned by " << employee.getName() << " last month.\n";
        }

        userInterface.monthlyPrintOut(functionalIncome, functionalGrandTotal, newBalance);
        
        //reset the grandtotal counter
        grandTotal = 0;

        dateHandler.incrementMonth();
        userInterface.askToSim(continueInput);
        balance.bankruptChecker(continueInput);
        userInterface.closeProgram(continueInput);
    }
    return 0;
}
