#include "pokemon.h"
using namespace std; 

Pokemon::Pokemon(){
    name="";
    hp=0;
    attack=0;
}

Pokemon::Pokemon(string name_, int hp_, int attack_){

    name= name_;
    hp=hp_;
    attack=attack_;

}

string Pokemon::get_name(){

    return name;
}

int Pokemon::get_hp(){

    return hp;
}

int Pokemon::get_attack(){

    return attack;
}

void Pokemon::set_name(string name_){

    name=name_;

    
}

void Pokemon::set_attack(int attack_){

    attack=attack_;
}

void Pokemon::set_hp(int hp_){

    hp=hp_;
}
