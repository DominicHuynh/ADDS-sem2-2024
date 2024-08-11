#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
int main (){
    Truckloads truck;
    std::cout<< truck.numTrucks(1024,5)<<std::endl;

    Reverser obj;
    std::cout<<obj.reverseDigit(123456)<<std::endl;
    std::cout<<obj.reverseString("hello world")<<std::endl;
     return 0;

}