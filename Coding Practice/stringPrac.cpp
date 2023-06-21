#include <iostream>
#include <string>

//name is the example string variable
//getline(std::cin, name)
//name.empty()
//name.length()
//name.clear()
//name.append
//name.at(index of string starts at 0)finds certain value amidst a string
//name.insert(index, "@")
//name.find("b") finds location of b in string. name.find(" ") finds blank spaces
//name.erase(index, index) one index through another index
//cplusplus.com/reference/string/string


int main()
{
    std::string name;

    std::cout << "Enter your username: ";
    std::getline(std::cin, name);

    name.insert(0, "@");

    if(name.length() > 12)
    {
        std::cout << "Your name cannot be over 12 characters long\n";
    }   
    else
    {
        std::cout << "Welcome, " << name << "\n";
    }

        std::cout << name.find(' ');

return 0;
}