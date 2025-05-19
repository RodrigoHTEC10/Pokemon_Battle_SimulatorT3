#ifndef GRASS_H
#define GRASS_H

#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"

class Grass: public Pokemon{
    private: 
        float multiplierG = 0.5; 
    
    public:
        Grass(); 

        Grass(string nam, float h, float att);
        
        float getMultiplierG();

        //Temporal Methods
        void getInfo();
};


#endif