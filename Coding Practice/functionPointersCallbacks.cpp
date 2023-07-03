#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <iomanip>

int Compare(int a, int b){
    if(a > b){
        return -1;
    }
    else{
        return 1;
    }
   
}

void DecreasingBubbleSort(int *array, int n, int (*pCompare)(int, int)){
    int i;
    int j;
    int temp;
    for(i = 0; i < n; ++i){
        for(j = 0; j < n - 1; ++j){
            if(pCompare(array[j], array[j + 1]) > 0){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {8, 4, 1, 2, 5, 3, 7, 6, 9, 0};
    DecreasingBubbleSort(array, 10, Compare);
    for(int i = 0; i < 10; ++i){
        std::cout << array[i] << std::endl;
    }

return 0;
}