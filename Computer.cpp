#include "Computer.h"

Computer :: Computer (){
    this -> name = "Computer ";
}

char Computer :: makeMove(){
    return 'R';
}
string Computer :: getName(){
    return name;
}