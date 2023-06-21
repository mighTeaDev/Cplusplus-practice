#include <iostream>
#include <string>
#include <cmath>

//break = breaks out of a loop, also used in switches to move to next case
//continue = skips current iteration

int main()
{
    for(int i = 1; i <= 20; i++)
    {
        if(i==13){
            continue;
            //break; would end the printout at 12
        }
        std::cout << i << '\n';
    }

return 0;
}