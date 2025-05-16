#include <string>
#include "Pokemon.h"

#ifndef WATER_H
#define WATER_H

class Water: public Pokemon{
    private:
    const float multiplierW = 0.6;

    public:
    Water();
    Water(int,std::string);
    int getMultiplierW();
}
#endif
