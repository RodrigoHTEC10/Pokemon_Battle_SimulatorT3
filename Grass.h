#ifndef GRASS_H
#define GRASS_H

#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"

class Grass: public Pokemon{
    private: 
        const float multiplierG = 0.5; 
    
    public:
        Grass(); 

        Grass(std::string, int, int);
        
        int getMultiplierG();
};


#endif