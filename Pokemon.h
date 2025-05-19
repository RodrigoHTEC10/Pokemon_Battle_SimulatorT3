#ifndef POKEMON_H
#define POKEMON_H
#include <string>
#include <iostream>

using namespace std; 

class Pokemon {
    private: 

        string name; 
        float hp; 
        float attack; 
    public:

        Pokemon();
        Pokemon(string, float, float);
        string getName();
        float getHp();
        float getAttack();
        void setName(string);
        void setHp(float);
        void setAttack(float); 

        //Temporal Methods
        void getInfo();

};

#endif
