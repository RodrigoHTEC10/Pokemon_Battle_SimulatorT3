#include "Water.h"

Water::Water() : Pakemon() {}


Water::Water(int vi, std::string nom): Pokemon(vi,nom){
}

int Water::getMultiplierW(){
    return multiplierW;
}
