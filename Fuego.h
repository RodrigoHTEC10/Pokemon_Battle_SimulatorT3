#ifndef FUEGO_H
#define FUEGO_H
#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"

class Fuego: public Pokemon{
    private: 
        const float multiplierF = 0.8; 
    
    public: 
        Fuego();

        Fuego(std::string, int, int);

        int getMultiplierF();
};

#endif