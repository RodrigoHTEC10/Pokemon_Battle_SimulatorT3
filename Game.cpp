#include <iostream>
#include "Game.h"

using namespace std;


//-------------------------------------------------------------------------------------------------
// Class Player Functionality Definitions


Game::Game(){};

Game::Game(vector<Water> water, vector<Fuego> fire, vector<Grass> grass){
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


    cout<<"Player enter your name: ";
    cin>>name;

    Player p(name,num);
    players[num-1]=p;

    cout<<"Player choose your Pokemon class: "<<endl;
    
    for(int i=0; i<sizeof(types);i++){
        cout<<i+1<<" . "<<types[i]<<endl;
    }
    
    cout<<"Enter the class number: "<<endl;
    cin>>type;
    players[num-1].setPokeType(types[type-1]);

    cout<<""<<endl;
    cout<<"Player choose your Pokemon: "<<endl;

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


    //---------------------------------------------------------------------------------------------------------
    //Methods

Water Game::getWaterPokemon(string name){
    for(int i=0; i<WaterPokemon.size();i++){
        if(WaterPokemon[i].getName()==name){
            return WaterPokemon[i];
        }
    }
    return Water();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Fuego Game::getFirePokemon(string name){
    for(int i=0; i<FirePokemon.size();i++){
        if(FirePokemon[i].getName()==name){
            return FirePokemon[i];
        }
    }
    return Fuego();
};


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Grass Game::getGrassPokemon(string name){
    for(int i=0; i<GrassPokemon.size();i++){
        if(GrassPokemon[i].getName()==name){
            return GrassPokemon[i];
        }
    }
    return Grass();
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Game::attack(Player attacker, Player receives){
    string typeAttack = attacker.getPokeType();
    string typeReceiver = receives.getPokeType();


    if(typeAttack == "Water" && typeReceiver =="Fire"){
        Water PokeAttack = getWaterPokemon(attacker.getPokeName());
        Fuego PokeRece = getFirePokemon(receives.getPokeName());
        PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()* PokeAttack.getMultiplierW()));

        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack()* PokeAttack.getMultiplierW()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;


    }
    else if(typeAttack == "Fire" && typeReceiver =="Grass"){
        Fuego PokeAttack = getFirePokemon(attacker.getPokeName());
        Grass PokeRece = getGrassPokemon(receives.getPokeName());
        PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()* PokeAttack.getMultiplierF()));

        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack()* PokeAttack.getMultiplierF()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;
    }


    else if(typeAttack == "Grass" && typeReceiver =="Water"){
        Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
        Water PokeRece = getWaterPokemon(receives.getPokeName());
        PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()* PokeAttack.getMultiplierG()));
        
        //Create message
        //Create message
        cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
        cout<<"Type Advantege! Damage Increased"<<endl;
        cout<<"Special attack of "<<PokeAttack.getAttack()* PokeAttack.getMultiplierG()<<" damage points."<<endl;
        cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;
    }
    //*****************************************************************************************/
    else{
        if(typeAttack == "Water" && typeReceiver =="Water"){
            Water PokeAttack = getWaterPokemon(attacker.getPokeName());
            Water PokeRece = getWaterPokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Water" && typeReceiver =="Grass"){
            Water PokeAttack = getWaterPokemon(attacker.getPokeName());
            Grass PokeRece = getGrassPokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Fire" && typeReceiver =="Water"){
            Fuego PokeAttack = getFirePokemon(attacker.getPokeName());
            Water PokeRece = getWaterPokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;

        }
        //--------------------------------------------------------------
        else if(typeAttack == "Fire" && typeReceiver =="Fire"){
            Fuego PokeAttack = getFirePokemon(attacker.getPokeName());
            Fuego PokeRece = getFirePokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;
        }
        //--------------------------------------------------------------
        else if(typeAttack == "Grass" && typeReceiver =="Fire"){
            Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
            Fuego PokeRece = getFirePokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;
        }
        //--------------------------------------------------------------
        else{
            Grass PokeAttack = getGrassPokemon(attacker.getPokeName());
            Grass PokeRece = getGrassPokemon(receives.getPokeName());
            PokeRece.setHp(PokeRece.getHp()-(PokeAttack.getAttack()));

            //Generic Message
            cout<<attacker.getPokeName()<<" attacked "<<receives.getPokeName()<<" !!!"<<endl;
            cout<<"Normal attack of "<<PokeAttack.getAttack()<<" damage points."<<endl;
            cout<<receives.getPokeName()<<" has "<<PokeRece.getHp()<<" HP points remaining."<<endl;
        }

    }

};


void Game::play(){
    choosePokemon(1);
    choosePokemon(2);
    bool win = false;

    cout<<"--Battle Start!--"<<endl;

    while (win == false){
        int i = 0;
        if(i%2 == 0){
            attack(players[0], players[1]);
        }
        else{
            attack(players[1], players[0]);
        }

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

        if(player1Health <= 0){
            cout<<players[0].getPokeName()<<" has fainted!"<<endl;
            cout<<players[1].getPokeName()<<" wins the battle!"<<endl;
            win = true;
        }
        else if(player2Health <= 0){
            cout<<players[1].getPokeName()<<" has fainted!"<<endl;
            cout<<players[0].getPokeName()<<" wins the battle!"<<endl;
            win = true;
        }

    }

    

    
};



int main(){
    Fuego poke1("Charmander",309,52);
    //Fuego poke2("Arcanine",555,90);
    //vector <Fuego> fire = {poke1, poke2};

    //Water poke3("Wishiwashi",620,140);
    //Water poke4("Basculegion",530,112);
    //vector <Water> water = {poke3, poke4};

    //Grass poke5("Venusaur",525,82);
    //Grass poke6("Tangela",435,55);
    //vector <Grass> grass = {poke5, poke6};

    //Game game(water, fire, grass);
    //game.play();

    return 0;
}