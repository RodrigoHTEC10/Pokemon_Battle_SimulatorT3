#include "Grass.h"

//Default constructor 
Grass::Grass() : Pokemon() {}

//Constructoe by parameters 
Grass::Grass(std::string nam, int h, int att): Pokemon(nam, h, att){ 
}

//getter
int Grass::getMultiplierG(){
    return multiplierG;
}
