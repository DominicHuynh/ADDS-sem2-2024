#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;
int main(){
    Human human("Dominic");
    Computer computer;
    Referee ref;

    Player* winner = ref.refGame(&human, &computer);
    if(winner==nullptr){
        cout<< "It's a Tie."<<endl;
    } 
    else{
        cout << winner -> getName() << " Wins." << endl;
    }


    return 0;
}