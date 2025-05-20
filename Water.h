#ifndef WATER_H
#define WATER_H

#include <string>
#include <iostream>

#include "Pokemon.h"

using namespace std;



class Water: public Pokemon{
    private:
        float multiplierW = 0.6;

    public:
        Water();

        Water(string nam, float h, float att);
        
        float getMultiplierW();

        float getMultiplierW(string extra);

        //Temporal Methods
        void getInfo() override;
};

#endif
