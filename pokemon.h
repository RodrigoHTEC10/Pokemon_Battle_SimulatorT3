#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using namespace std; 

class Pokemon {
    private: 
        string name; 
        int hp; 
        int attack; 
    public:
        Pokemon();
        Pokemon(string, int, int);
        string getName();
        int getHp();
        int getAttack();
        void setName(string);
        void setHp(int);
        void setAttack(int); 


};

#endif
