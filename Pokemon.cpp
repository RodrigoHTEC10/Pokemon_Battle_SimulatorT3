#include <iostream>
#include "Pokemon.h"
using namespace std; 

Pokemon::Pokemon(){
    name="";
    hp=0.0;
    attack=0.0;
}

Pokemon::Pokemon(string name_, float hp_, float attack_){
    name= name_;
    hp=hp_;
    attack=attack_;
}

string Pokemon::getName(){
    return name;
}

float Pokemon::getHp(){
    return hp;
}

float Pokemon::getAttack(){
    return attack;
}

void Pokemon::setName(string name_){
    name=name_;
}

void Pokemon::setAttack(float attack_){
    attack=attack_;
}

void Pokemon::setHp(float hp_){
    hp=hp_;
}

void Pokemon::getInfo(){
    cout<<"Pokemon Name: "<<name<<endl;
    cout<<"Pokemon HP: "<<hp<<endl;
    cout<<"Pokemon Attack Points: "<<attack<<endl;


};  