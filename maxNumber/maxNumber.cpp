#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {4, 1, 9, 7, 2};

    int maxVal = *std::max_element(arr,arr+5);

    std::cout << maxVal;

    return 0;
}