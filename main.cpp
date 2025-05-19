#include <iostream>
#include <vector>
#include "Pokemon.cpp"
#include "Water.cpp"
#include "Grass.cpp"
#include "Fire.cpp"
#include "Player.cpp"
#include "Game.cpp"

using namespace std;

int main(){
    //Prubas de Pokemon

    /*Pokemon pikachu("Pikachu",100,50);
    pikachu.getInfo();

    
    pikachu.setName("Juan Pikachu");
    cout<<pikachu.getName()<<endl;
    pikachu.setAttack(300);
    cout<<pikachu.getAttack()<<endl;
    pikachu.setHp(200);
    cout<<pikachu.getHp()<<endl;

    pikachu.getInfo();*/

    /*Registro de Modificaciones:
    - Cambio del nombre de clase de pokemon a Pokemon.
    - Agregación del método getInfo().
    */

    //Pruebas de Water
    
    /*Water bulbasor("Bulbasour", 500, 200);
    bulbasor.getInfo();

    bulbasor.setName("Juan Pikachu");
    cout<<bulbasor.getName()<<endl;
    bulbasor.setAttack(300);
    cout<<bulbasor.getAttack()<<endl;
    bulbasor.setHp(200);
    cout<<bulbasor.getHp()<<endl;

    bulbasor.getInfo();
    
    cout<<bulbasor.getMultiplierW()<<endl;
    */


    /*Registro de Modificaciones:
    - Cambio del constructor con parametros en Water.h.
    - Agregación del método getInfo().
    */

    //Pruebas de Grass

    /*
    Grass pasto("Pasto", 500, 200);
    pasto.getInfo();

    pasto.setName("Juan Pasto");
    cout<<pasto.getName()<<endl;
    pasto.setAttack(300);
    cout<<pasto.getAttack()<<endl;
    pasto.setHp(200);
    cout<<pasto.getHp()<<endl;

    pasto.getInfo();
    
    cout<<pasto.getMultiplierG()<<endl;
    */

    /*Registro de Modificaciones:
    - Cambio del constructor con parametros en Water.h.
    - Agregación del método getInfo().
    */

    //Pruebas de Grass

    /*
    Fire fuego("Pasto", 500, 200);
    fuego.getInfo();

    fuego.setName("Juan fuego");
    cout<<fuego.getName()<<endl;
    fuego.setAttack(300);
    cout<<fuego.getAttack()<<endl;
    fuego.setHp(200);
    cout<<fuego.getHp()<<endl;

    fuego.getInfo();
    
    cout<<fuego.getMultiplierF()<<endl;
    */

    /*Registro de Modificaciones:
    - Cambio del nombre de la clase por Fire.h
    - Cambio del constructor con parametros en Fire.h.
    - Agregación del método getInfo().
    */

    //Pruebas de Player

    /*
    Player yo("Rodrigo", 1);
    yo.getInfo();

    yo.setPokeName("Pikachu");
    cout<<yo.getPokeName()<<endl;

    yo.setPokeType("Fire");
    cout<<yo.getPokeType()<<endl;

    yo.getInfo();
    */

    //Prueba de Game

    Water bulbasor("Bulbasour", 500, 200);
    Water nico("Nico", 500, 200);
    vector <Water> water = {bulbasor, nico};

    Grass pasto("Pasto", 500, 200);
    Grass dante("Dante", 500, 200);
    vector <Grass> grass = {pasto, dante};
    
    Fire fuego("Pasto", 500, 200);
    Fire kevin("Kevin", 500, 200);
    vector <Fire> fire = {fuego, kevin};

    Game re(water ,fire, grass);
    
    re.play();

    /*
    Modifications:
    - Internal modifications of the methods play() and choosePokemon()
    - Addition of the getPlayer(int num) method

    */

    return 0;
}