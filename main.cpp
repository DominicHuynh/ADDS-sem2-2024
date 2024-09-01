
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>

int main(){
    BubbleSort bubble;
    QuickSort quick;
    RecursiveBinarySearch search;
    std::vector<int> list;
    int in; 
    while(std::cin >> in){
        list.push_back(in);
    }

    list = quick.sort(list);
    std::cout << (search.search(list,1)? "true" : "false")  << " ";
    for(int num : list){
        std::cout<<num<<" ";
    }

    return 0;
}
