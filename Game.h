#include <iostream>
#include "Pokemon.h"

using namespace std;

#pragma once

class Game
{

private:
    Pokemon WaterPokemon[10];
    Pokemon FirePokemon[10];
    Pokemon GrassPokemon[10];
public:
    Game();

    Game(Pokemon[] water, Pokemon[] fire, Pokemon[] grass);

    //---------------------------------------------------------------------------------------------------------
    //Getters

    string getPokemon();

    //---------------------------------------------------------------------------------------------------------
    //Methods

    void attack();
    
    void play();
};