#include <iostream>
#include "Grass.h"
#include "Pokemon.cpp"

using namespace std;

//Default constructor 
Grass::Grass() : Pokemon() {};

//Constructoe by parameters 
Grass::Grass(std::string nam, int h, int att): Pokemon(nam, h, att){ 
};

//getter
int Grass::getMultiplierG(){
    return multiplierG;
};
