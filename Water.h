#ifndef WATER_H
#define WATER_H

#include <string>
#include <iostream>

#include "Pokemon.h"

using namespace std;



class Water: public Pokemon{
    private:
        const float multiplierW = 0.6;

    public:
        Water();

        Water(string nam, int h, int att);
        
        int getMultiplierW();
};

#endif
