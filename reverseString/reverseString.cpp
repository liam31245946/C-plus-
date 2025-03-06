#include <iostream>
#include <algorithm>

int main(){
    std::string word = "hello";
    std::reverse(word.begin(),word.end());
    std::cout<<word;
    return 0;
}