#include<iostream>
#include<fstream>

//step 1 - name the file
//step 2 - open the file
//step 3 - read the file
//step 4 - write the file
//step 5 - close the file

//using streams like ios/istream/ostream/ifstream/ofstream
//ifstream - input file stream (get(), getline(), read())
//ofstream - output file stream (put(), write())
//fstream - file stream 


int main(){

    std::fstream omegaBunkerBomb;
    omegaBunkerBomb.open("omegaBunkerBomb.txt", std::ios::out); //ios::out - complete overwrite mode
    if(omegaBunkerBomb.is_open()){
        omegaBunkerBomb << "File opened and written onto successfully" << std::endl;
        omegaBunkerBomb << "Second line test" << std::endl;
        omegaBunkerBomb.close();

    }
    else{
        std::cout << "File not opened" << std::endl;
    }
    omegaBunkerBomb.open("omegaBunkerBomb.txt", std::ios::app); //ios::out - write mode
    if(omegaBunkerBomb.is_open()){
        omegaBunkerBomb << "lmao third line" << std::endl;
        omegaBunkerBomb.close();
    }
    else{
        std::cout << "File not opened" << std::endl;
    }
     return 0;
}