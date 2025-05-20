#ifndef FIRE_H
#define FIRE_H
#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"

class Fire: public Pokemon{
    private: 
        float multiplierF = 0.8; 
    
    public: 
        Fire();

        Fire(string nam, float h, float att);

        float getMultiplierF();

        float getMultiplierF(string extra);

        //Temporal methods
        void getInfo() override;
};

#endif