#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "Pokemon.h"
#include "Fire.h"
#include "Grass.h"
#include "Water.h"
#include "Player.h"

using namespace std;

#pragma once

class Game
{

private:
    vector <Water> WaterPokemon;
    vector <Fire> FirePokemon;
    vector <Grass> GrassPokemon;
    Player players[2];
public:
    Game();

    Game(vector<Water> water, vector<Fire> fire, vector<Grass> grass);

    //---------------------------------------------------------------------------------------------------------
    //Getters

    string choosePokemon(int num);
    Player getPlayer(int num);

    //---------------------------------------------------------------------------------------------------------
    //Methods
    Water getWaterPokemon(string name);
    Fire getFirePokemon(string name);
    Grass getGrassPokemon(string name);

    float attack(Player attacker, Player receives, float life2);
    
    void play();
};


#endif