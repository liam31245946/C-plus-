#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int arr[]={1, 2, 3, 1, 2, 1};

    int arrSize= sizeof(arr) / sizeof (arr[0]);

    unordered_map<int,int>count;
    
    for ( int i = 0 ; i < arrSize; i++){
        count[arr[i]]++;
    }
    for(auto pair: count){
        cout << "Number " << pair.first << " appears " << pair.second << " times.";
    }
    };