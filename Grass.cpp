#include <iostream>
#include "Grass.h"
#include "Pokemon.h"

using namespace std;

//Default constructor 
Grass::Grass() : Pokemon() {};

//Constructoe by parameters 
Grass::Grass(string name, float hp, float att): Pokemon(name, hp, att){ 
};

//getter
float Grass::getMultiplierG(){
    return multiplierG;
};

float Grass::getMultiplierG(string extra){
    return multiplierG+0.2;
};

void Grass::getInfo(){
    Pokemon::getInfo();
    cout<<"Multiplicador: "<<multiplierG<<endl;
};
