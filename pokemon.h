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
        string get_name();
        int get_hp();
        int get_attack();
        void set_name(string);
        void set_hp(int);
        void set_attack(int); 


};

#endif
