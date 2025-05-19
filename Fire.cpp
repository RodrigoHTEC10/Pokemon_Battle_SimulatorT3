#include <iostream>
#include "Fire.h"
#include "Pokemon.h"

using namespace std;

//Default constructor
Fire::Fire():Pokemon(){};

//Constructor by parameters 
Fire::Fire(string nam, float h, float att, float multip): Pokemon(nam, h, att){ 
};

//getter
float Fire::getMultiplierF(){
    return multiplierF;
};


void Fire::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierF<<endl;
};
