#include <iostream>
    
//Namespaces allow for preventing name conflicts in larger projects

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
    using namespace first;
    std::cout << x;
    return 0;
} 

int alternate(){
    using std::cout;
  //possibility  using std::string;
    std::cout << second::x;
    return 0;
}