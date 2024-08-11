#include <iostream>
#include <cmath>
#include <string>

#include "Reverser.h"
int Reverser::reverseDigit(int value){
    if(value<0) return -1;
    if(value/10==0){
        return value;
    }
    // std::cout<<floor(log10(value))<<std::endl;
    int res = value%10*pow(10,floor(int(log10(value))))+reverseDigit(value/10);
    // std::cout<<res<<std::endl;
    return res;
}

std::string Reverser::reverseString(std::string characters){
    if(characters.size()<=0){
        return "";
    }
    
    std::string curr=""; 
    curr = curr + characters[characters.size()-1];
    return curr+reverseString(characters.substr(0,characters.size()-1));
}


// int main(){
//     Reverser obj;
//     std::cout<<obj.reverseDigit(123456)<<std::endl;
//     std::cout<<obj.reverseString("hello world")<<std::endl;
//     return 0;
// }