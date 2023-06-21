#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

// inheritance is when a class can receive attributes and methods from another class
// receiving class = child class, inherits from parent class
// helps to re-use similar code found within multiple classes

//class ChildName : public ParentName{};

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "The animal is eating\n";
    }
};

class Dog : public Animal{
    public:

    void bark(){
        std::cout << "The dog barks\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "The cat meows\n";
    }
};



int main()
{
    Dog dog1;
    Cat cat1;

    std::cout <<dog1.alive << "\n";
    dog1.eat();
    dog1.bark();

    std::cout <<cat1.alive << "\n";
    cat1.eat();
    cat1.meow();

return 0;
}