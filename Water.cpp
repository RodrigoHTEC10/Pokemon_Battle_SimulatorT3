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

void Water::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierW<<endl;
};
