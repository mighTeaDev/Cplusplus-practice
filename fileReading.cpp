#include <iostream>
#include <fstream>
#include <string>

//reading a file

int main(){

    std::fstream omegaBunkerBomb;
    omegaBunkerBomb.open("omegaBunkerBomb.txt", std::ios::in); // reading mode
    if(omegaBunkerBomb.is_open()){
        std::string fileLine;

        while(getline(omegaBunkerBomb, fileLine)){
            std::cout << fileLine << std::endl;
        }
        omegaBunkerBomb.close();
    }

    return 0;
}