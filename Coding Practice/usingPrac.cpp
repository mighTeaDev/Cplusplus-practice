#include <iostream>
#include <vector>

//"using" is a more popular keyword for typedef function

using text_t = std::string;
using number_t = int;



int main(){
   
    text_t firstName = "mufuggah";
    number_t age = 29;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

return 0;
}