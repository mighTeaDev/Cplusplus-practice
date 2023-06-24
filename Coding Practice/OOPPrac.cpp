#include <iostream>
#include <vector>

class HumanPerson {
  protected:
    std::string firstName;
    std::string lastName;

  public:

    HumanPerson(std::string firstName, std::string lastName): firstName(firstName), lastName(lastName) {}
    HumanPerson() = default;
    void printFullName(){

        std::cout << firstName << " " << lastName << "\n";
    }
    void setFirstName(std::string firstName){
        this->firstName = firstName;
    }
    void setLastName(std::string lastName){
        this->lastName = lastName;
    }
    std::string getName(){
        return firstName + " " + lastName;
    }
    virtual void printInfo(){
        std::cout << firstName + " " + lastName << " is innocent\n";
    }
    static void printPeople(std::vector<HumanPerson*> people){
        for(auto person : people){
            person->printInfo();
        }
    }
};

class Zombie : public HumanPerson{
    std::string zombieType;
    public:
        Zombie(std::string firstName, std::string lastName, std::string zombieType) : HumanPerson(firstName, lastName), zombieType(zombieType){}
        Zombie() = default;
        std::string getZombieType(){
            return zombieType;
        }
    void setZombieType(std::string zombieType){
        this->zombieType = zombieType;
    }
    void printInfo() override {
        std::cout << firstName + " " + lastName << " HAPPENS TO BE A " << getZombieType() << "\n";
    }
};


int main(){
    std::vector<HumanPerson*> people;
    HumanPerson firstHumanAlive("Jimmothy", "Taxwalt");
    HumanPerson secondHumanAlive("Timothan", "Guardiola");
    HumanPerson thirdHumanAlive;

    thirdHumanAlive.setFirstName("Matthew");
    thirdHumanAlive.setLastName("Paku");

    std::cout << "---------------------------------\n";
    std::cout << "Players Connected: \n";

    firstHumanAlive.printFullName();
    secondHumanAlive.printFullName();

    //print Matty Park to test getName()
    std::cout << thirdHumanAlive.getName() << "\n";

    Zombie firstZombieAlive;
    firstZombieAlive.setFirstName("Leonidas");
    firstZombieAlive.setLastName("Dingleton");
    firstZombieAlive.setZombieType("Traitor");

    std::cout << firstZombieAlive.getName() << "\n";

    std::cout << "---------------------------------\n";
    std::cout << "The assigned roles are: \n";
    

    people.push_back(&firstHumanAlive);
    people.push_back(&secondHumanAlive);
    people.push_back(&thirdHumanAlive);
    people.push_back(&firstZombieAlive);

    HumanPerson::printPeople(people);

    std::cout << "---------------------------------\n";
    
return 0;    
}