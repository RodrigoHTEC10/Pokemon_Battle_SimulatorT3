#include <iostream>
#include "Pokemon.h"

using namespace std; 

Pokemon::Pokemon(){
    name = "";
    hp = 0;
    attack = 0;
}; 

Pokemon::Pokemon(string name_, int hp_, int attack_){
    name = name_;
    hp = hp_;
    attack = attack_;
};

string Pokemon::getName(){
    return name;
};

int Pokemon::getHp(){
    return hp;
};

int Pokemon::getAttack(){
    return attack;
};

void Pokemon::setName(string name_){
    name = name_;
};

void Pokemon::setAttack(int attack_){
    attack = attack_;
};

void Pokemon::setHp(int hp_){
    hp = hp_;
};
