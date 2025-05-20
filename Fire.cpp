#include <iostream>
#include "Fire.h"
#include "Pokemon.h"

using namespace std;

//Default constructor
Fire::Fire():Pokemon(){};

//Constructor by parameters 
Fire::Fire(string nam, float h, float att): Pokemon(nam, h, att){ 
};

//getter
float Fire::getMultiplierF(){
    return multiplierF;
};

float Fire::getMultiplierF(string extra){
    return multiplierF+0.2;
};


void Fire::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierF<<endl;
};
