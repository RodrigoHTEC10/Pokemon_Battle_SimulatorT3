#include "Grass.h"

//Default constructor 
Grass::Grass() : Pokemon() {}

//Constructoe by parameters 
Grass::Grass(int vi, std::string nom): Pokemon(vi, nom){ 
}

//getter
int Grass::getMultiplierG(){
    return multiplierG;
}
