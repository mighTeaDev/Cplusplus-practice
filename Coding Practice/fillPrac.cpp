#include <iostream>

//fill() = Fills a range of elements with a specified value 
//      fill(begin, end, value)

int main()
{
    std::string truth[100];
    fill(truth, truth + 100, "Rogue is ass");
    for(std::string truthElement : truth){
        std::cout << truthElement << "\n";
    }
return 0;
}
