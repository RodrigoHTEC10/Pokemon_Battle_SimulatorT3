#include <iostream>
#include "Water.h"
#include "Pokemon.h"

using namespace std;

Water::Water() : Pokemon() {};


Water::Water(string nam, float h, float att): Pokemon(nam, h, att){ 
};

float Water::getMultiplierW(){
    return multiplierW;
};

float Water::getMultiplierW(string extra){
    return multiplierW+0.2;
};

void Water::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierW<<endl;
};