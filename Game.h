#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "Fuego.cpp"
#include "Grass.cpp"
#include "Water.cpp"
#include "Player.cpp"

using namespace std;

#pragma once

class Game
{

private:
    vector <Water> WaterPokemon;
    vector <Fuego> FirePokemon;
    vector <Grass> GrassPokemon;
    Player players[2];
public:
    Game();

    Game(vector<Water> water, vector<Fuego> fire, vector<Grass> grass);

    //---------------------------------------------------------------------------------------------------------
    //Getters

    string choosePokemon(int num);

    //---------------------------------------------------------------------------------------------------------
    //Methods
    Water getWaterPokemon(string name);
    Fuego getFirePokemon(string name);
    Grass getGrassPokemon(string name);

    void attack(Player attack, Player receives);
    
    void play();
};


#endif