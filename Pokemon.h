#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>

using namespace std; 


class Pokemon {

    private: 
        string name; 
        int hp; 
        int attack; 
        
    public:

        Pokemon(); 

        Pokemon(string name_, int hp_, int attack_);

        std::string getName();

        int getHp();

        int getAttack();

        void setName(string name_);

        void setAttack(int attack_);

        void setHp(int hp_);


};

#endif