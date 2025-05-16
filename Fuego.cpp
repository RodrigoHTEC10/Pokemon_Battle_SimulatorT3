#include "Fuego.h"

//Default constructor
Fuego::Fuego() : Pokemon() {}

//Constructor by parameters 
Fuego::Fuego(int vi, std::string nom): Pokemon(vi, nom){ 
}

//getter
int Fuego::getMultiplierF(){
    return multiplierF;
}
