#include <iostream>
#include "Game.h"

using namespace std;


//-------------------------------------------------------------------------------------------------
// Class Player Functionality Definitions


Game::Game(){};

Game::Game(vector<Water> water, vector<Fire> fire, vector<Grass> grass){
    for (int i = 0; i<water.size(); i++){
        WaterPokemon.push_back(water[i]);
    }

    for (int i = 0; i<fire.size(); i++){
        FirePokemon.push_back(fire[i]);
    }

    for (int i = 0; i<grass.size(); i++){
        GrassPokemon.push_back(grass[i]);
    }
};

    //---------------------------------------------------------------------------------------------------------
    //Getters

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
string Game::choosePokemon(int num){
    string name;
    string types[] = {"Water","Fire","Grass"};
    int type;
    int poke;

    
    cout<<"Welcome Player"<<num<<endl;
    cout<<""<<endl;
    cout<<"Enter your name: ";
    cin>>name;

    Player p(name,num);
    players[num-1]=p;

    cout<<"Choose your Pokemon class: "<<endl;
    
    for(int i=0; i<3;i++){
        cout<<i+1<<" . "<<types[i]<<endl;
    }
    
    cout<<"Enter the class number: "<<endl;
    cin>>type;
    players[num-1].setPokeType(types[type-1]);

    cout<<""<<endl;
    cout<<"Choose your Pokemon: "<<endl;

    if(type == 1){
        for(int i=0; i<WaterPokemon.size();i++){
            cout<<i+1<<" ."<<WaterPokemon[i].getName()<<endl;
        }
    }
    else if(type ==2){
        for(int i=0; i<FirePokemon.size();i++){
            cout<<i+1<<" ."<<FirePokemon[i].getName()<<endl;
        }
    }
    else{
        for(int i=0; i<GrassPokemon.size();i++){
            cout<<i+1<<" ."<<GrassPokemon[i].getName()<<endl;
        }
    }

    cout<<"Enter the Pokemon number: "<<endl;
    cin>>poke;
    
    if(type == 1){
        players[num-1].setPokeName(WaterPokemon[poke-1].getName());
        return players[num-1].getPokeName();
    }
    else if(type ==2){
        players[num-1].setPokeName(FirePokemon[poke-1].getName());
        return players[num-1].getPokeName();
    }
    else{
        players[num-1].setPokeName(GrassPokemon[poke-1].getName());
        return players[num-1].getPokeName();
    }
}


Player Game::getPlayer(int num){
    return players[num-1];
};

    //---------------------------------------------------------------------------------------------------------
    //Methods

Water Game::getWaterPokemon(string name){
    for(int i=0; i<WaterPokemon.size();i++){
        if(WaterPokemon[i].getName()==name){
            return WaterPokemon[i];
        }
    }
    return WaterPokemon[0];
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Fire Game::getFirePokemon(string name){
    for(int i=0; i<FirePokemon.size();i++){
        if(FirePokemon[i].getName()==name){
            return FirePokemon[i];
        }
    }
    return FirePokemon[0];
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Grass Game::getGrassPokemon(string name){
    for(int i=0; i<GrassPokemon.size();i++){
        if(GrassPokemon[i].getName()==name){
            return GrassPokemon[i];
        }
    }
    return GrassPokemon[0];
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float Game::attack(Player attacker, Player receives, float life2){
    string typeAttack = attacker.getPokeType();
    string typeReceiver = receives.getPokeType();


    if(typeAttack == "Water" && typeReceiver =="Fire"){
        Water PokeAttack = getWaterPokemon(attacker.getPokeName());
        Fire PokeRece = getFirePokemon(receives.getPokeName());
        life2 = life2-(PokeAttack.getAttack() + (PokeAttack.getAttack()* PokeAttack.getMultiplierW()));

        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack() + PokeAttack.getAttack()*PokeAttack.getMultiplierW()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;


    }
    else if(typeAttack == "Fire" && typeReceiver =="Grass"){
        Fire PokeAttack = getFirePokemon(attacker.getPokeName());
        Grass PokeRece = getGrassPokemon(receives.getPokeName());
        life2 = life2-(PokeAttack.getAttack() + PokeAttack.getAttack()* PokeAttack.getMultiplierF());

        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack() + PokeAttack.getAttack()* PokeAttack.getMultiplierF()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;
    }


    else if(typeAttack == "Grass" && typeReceiver =="Water"){
        Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
        Water PokeRece = getWaterPokemon(receives.getPokeName());
        life2 = life2-(PokeAttack.getAttack() + PokeAttack.getAttack()* PokeAttack.getMultiplierG());
        
        //Create message
        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack() + PokeAttack.getAttack()* PokeAttack.getMultiplierG()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;
    }
    //*****************************************************************************************/
    else{
        if(typeAttack == "Water" && typeReceiver =="Water"){
            Water PokeAttack = getWaterPokemon(attacker.getPokeName());
            Water PokeRece = getWaterPokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Water" && typeReceiver =="Grass"){
            Water PokeAttack = getWaterPokemon(attacker.getPokeName());
            Grass PokeRece = getGrassPokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Fire" && typeReceiver =="Water"){
            Fire PokeAttack = getFirePokemon(attacker.getPokeName());
            Water PokeRece = getWaterPokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Fire" && typeReceiver =="Fire"){
            Fire PokeAttack = getFirePokemon(attacker.getPokeName());
            Fire PokeRece = getFirePokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;
        }
        //--------------------------------------------------------------
        else if(typeAttack == "Grass" && typeReceiver =="Fire"){
            Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
            Fire PokeRece = getFirePokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;
        }
        //--------------------------------------------------------------
        else{
            Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
            Grass PokeRece = getGrassPokemon(receives.getPokeName());
            life2 = life2-(PokeAttack.getAttack());

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<life2<<" HP points remaining."<<endl;
        }

    }

    return life2;

};


void Game::play(){
    cout<<"Welcome to the Pokemon Battle."<<endl;
    cout<<"Players, to your corners..."<<endl;
    cout<<""<<endl;
    choosePokemon(1);
    cout<<""<<endl;
    choosePokemon(2);
    bool win = false;
    cout<<""<<endl;
    cout<<"--Battle Start!--"<<endl;
    cout<<""<<endl;

    string type0 = players[0].getPokeType();
    string type1 = players[1].getPokeType();

    int player1Health;
    int player2Health;


    if(type0 == "Water"){
        player1Health = getWaterPokemon(players[0].getPokeName()).getHp();
    }
    else if(type0 == "Fire"){
        player1Health = getFirePokemon(players[0].getPokeName()).getHp();
    }
    else{
        player1Health = getGrassPokemon(players[0].getPokeName()).getHp();
    }

    if(type1 == "Water"){
        player2Health = getWaterPokemon(players[0].getPokeName()).getHp();
    }
    else if(type1 == "Fire"){
        player2Health = getFirePokemon(players[0].getPokeName()).getHp();
    }
    else{
        player2Health = getGrassPokemon(players[0].getPokeName()).getHp();
    }

    //Counter
    int i = 0;

    while (win == false){
        

        if(i%2 == 0){
            cout<<""<<endl;
            player2Health = attack(players[0], players[1], player2Health);
        }
        else{
            cout<<""<<endl;
            player1Health = attack(players[1], players[0], player1Health);
        }

        //_______________________________________________________
        //cout<<"Player 1 Health: "<<player1Health<<endl;
        //cout<<"Player 2 Health: "<<player2Health<<endl;
        //_______________________________________________________-

        if(player1Health <= 0){
            cout<<""<<endl;
            cout<<players[0].getPokeName()<<" has fainted!"<<endl;
            cout<<players[1].getPokeName()<<" wins the battle!"<<endl;
            cout<<""<<endl;
            cout<<"--End of the Battle--"<<endl;
            win = true;



        }
        else if(player2Health <= 0){
            cout<<""<<endl;
            cout<<players[1].getPokeName()<<" has fainted!"<<endl;
            cout<<players[0].getPokeName()<<" wins the battle!"<<endl;
            cout<<""<<endl;
            cout<<"--End of the Battle--"<<endl;
            win = true;
        }

        i++;

    }

    

    
};
