#include <iostream>

using namespace std;

#pragma once

class Player{
    private:
        string name;
        int id;

    public:
        Player();
        Player(string name_, char symb_);
        
        //---------------------------------------------------------------------------------------------------------
        //Getters

        string getName();
        int getId();

        //---------------------------------------------------------------------------------------------------------
        //Setters

        void setName(string name_);
        void setId(int id_);
};