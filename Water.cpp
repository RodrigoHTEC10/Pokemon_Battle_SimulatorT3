#include <iostream>
#include "Water.h"
#include "Pokemon.cpp"

using namespace std;

Water::Water() : Pokemon() {};


Water::Water(std::string nam, int h, int att): Pokemon(nam, h, att){ 
};

int Water::getMultiplierW(){
    return multiplierW;
};
