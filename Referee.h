#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Player.h"
#include "Computer.h"
#include <iostream>
using namespace std;
class Referee{
    public:
    Referee( ); // constructor
    Player * refGame(Player * player1, Player * player2);

};



#endif