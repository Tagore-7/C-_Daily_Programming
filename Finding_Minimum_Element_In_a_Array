// C++ program to find the minimum element in a array
#include <iostream>
#include <vector>

int findMin(const std::vector<int>& array1){
    int min = array1[0];
    for(int j = 1; j < array1.size(); j++){
        
        if (array1[j] < min){
            min = array1[j];
        }
    }
   return min;
}
int main() {
    // Write C++ code here
    std::vector<int>array;
    for (int i = 1; i <= 10; i++){
        array.push_back(i);
    }
    int Min = findMin(array);
    std::cout<< " Minimum element is " << Min << std::endl;
    return 0;
}
