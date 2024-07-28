#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream>
using namespace std;
class Human : public Player{
    private:
    string name;
    char move;
    public:
    Human();
    Human(string name);
    char makeMove();
    string getName();



};







#endif