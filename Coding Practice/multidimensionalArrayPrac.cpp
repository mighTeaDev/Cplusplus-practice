#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <thread>
#include <chrono>

//Multidimensional arrays help make up grids, matrices, etc
//name[#rows][#columns] rows x columns = elements

int main()
{
    std::string cars[][4] = {{"Mustang", "F150", "F350", "Escape"},
                             {"Corvette", "Volt", "Equinox", "Silverado"},
                             {"Durango", "Charger", "Ram 1500", "Ram 2500"}};

    int rows = sizeof(cars) / sizeof(cars[1]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
        std::cout << "\n";
    }

    return 0;
}