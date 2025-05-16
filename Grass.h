#include <string>
#ifndef GRASS_H
#define GRASS_H

#include "Pokemon.h"

class Grass: public Pokemon{
    private: 
        const float multiplierG = 0.5; 
    
    public:
        Grass(); 
        Grass(int, std::string);
        int getMultiplierG();
};


#endif