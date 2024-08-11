#include <iostream>
#include <cmath>
#include <string>

#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }
    int res = 0;
    int curr = numCrates/2;
    res += numTrucks(curr,loadSize);
    res += numTrucks(numCrates-(int)curr,loadSize);
    return res;
}

// int Truckloads::getTrucks(){
//     return trucks;
// }

// int main(){
//     Truckloads truck;
//     std::cout<< truck.numTrucks(1024,5)<<std::endl;
//     return 0;
// }