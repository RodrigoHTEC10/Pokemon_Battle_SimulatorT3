#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

using namespace std;

class Player{
    private:
        string name;
        int id;
        string pokeName;
        string pokeType;

    public:
        Player();
        Player(string name_, int id_);
        
        //---------------------------------------------------------------------------------------------------------
        //Getters

        string getName();
        int getId();
        string getPokeName();
        string getPokeType();

        //---------------------------------------------------------------------------------------------------------
        //Setters

        void setName(string name_);
        void setId(int id_);
        void setPokeName(string name_);
        void setPokeType(string type_);
};

#endif