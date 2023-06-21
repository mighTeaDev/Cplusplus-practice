#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

//objects are a collection of attributes and methods
//attributes are characteristics of the objects, and methods are functions that an object can perform
//objects can mimic real world items
//Dog class could be name age type of dog, and the methods could be barking, sleeping, eating
//classes are essentially a blueprint of an object

class Human{
    public: 
        std::string name; 
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This dude eating\n";
        }
        void drink(){
            std::cout << "This dude drinking\n";
        }
        void sleep(){
            std::cout << "This dude sleeping\n";
        }
};

int main()
{
    Human human1;
    Human human2;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 16;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.eat();
    human1.drink();

    std::cout << "You are getting tired....\n";

    human1.sleep();

    std::cout << human1.name << " is dreaming of his friend while locked in galactic prison, his name is " << human2.name;

return 0;
}
