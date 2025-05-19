#include <iostream>
#include "Player.h"

using namespace std;


//-------------------------------------------------------------------------------------------------
// Class Player Functionality Definitions


//Default constructor
Player::Player(){
    name = "";
    id = 0;
    pokeName = "";
    pokeType = "";
}

//-------------------------------------------------------------------------------------------------

//Constructor
Player::Player(string name_, int id_){
    name = name_;
    id = id_;
    pokeName = "";
    pokeType = "";
}

//-------------------------------------------------------------------------------------------------
//Getters

//getName() returns the name of player.
string Player::getName(){
    return name;
};

//getId() returns the id of the player.
int Player::getId(){
    return id;
};

string Player::getPokeName(){
    return pokeName;
};

string Player::getPokeType(){
    return pokeType;
};

//-------------------------------------------------------------------------------------------------
//Setters

//setName(string name_) allows to set the name of the player as the string variable name_.
void Player::setName(string name_){
    name = name_;
};

//setId(int id_) allows to set the id of the player as the character variable id_.
void Player::setId(int id_){
    id=id_;
};


void Player::setPokeName(string name_){
    pokeName = name_;
};

void Player::setPokeType(string type_){
    pokeType = type_;
};

void Player::getInfo(){
    cout<<"Player Name:"<<name<<endl;
    cout<<"Player ID:"<<id<<endl;
    cout<<"Pokemon Name:"<<pokeName<<endl;
    cout<<"Pokemon Type:"<<pokeType<<endl;
};
