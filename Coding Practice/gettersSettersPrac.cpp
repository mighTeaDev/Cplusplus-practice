#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//Abstraction = hiding unnecessary data from outside a class
// getter = function that makes a private attribute readable
// setter = function that makes a private attribute writeable

class Stove{
    private:
        int temperature = 0;
    public:
    // Stove(int temperature){
    //     setTemperature(temperature);
    // }
    void setTemperature(int temperature){
        if(temperature < 0){
            this->temperature = 0;
        }
        else if(temperature >= 20){
            this->temperature = 10;
        }
        else{
            this->temperature = temperature;
        }
    }
    int getTemperature(){
        return temperature;
    }
};

int main()
{
    int temperature;
    std::cout << "what should the temp be?: ";
    std::cin >> temperature;
    Stove stove1;
    stove1.setTemperature(temperature);

    std::cout << "The temperature is now set to: " << stove1.getTemperature() << " celsius";

return 0;
}