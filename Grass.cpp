#include <iostream>
#include "Grass.h"
#include "Pokemon.h"

using namespace std;

//Default constructor 
Grass::Grass() : Pokemon() {};

//Constructoe by parameters 
Grass::Grass(string nam, float h, float att): Pokemon(nam, h, att){ 
};

//getter
float Grass::getMultiplierG(){
    return multiplierG;
};

void Grass::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierG<<endl;
};
