#include <iostream>
#include "Fuego.h"
#include "Pokemon.cpp"

using namespace std;

//Default constructor
Fuego::Fuego():Pokemon(){};

//Constructor by parameters 
Fuego::Fuego(std::string nam, int h, int att): Pokemon(nam, h, att){ 
};

//getter
int Fuego::getMultiplierF(){
    return multiplierF;
};
