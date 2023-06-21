#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

//return will return a value back to the spot where you called the encompassing function

using namespace std;

string concatStrings(string string1, string string2);

int main()
{
    string firstName = "kairo";
    string lastName = "cito";

    string fullName = concatStrings(firstName, lastName);
    std::cout << fullName;

return 0;
}

string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}