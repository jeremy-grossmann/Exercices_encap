// Exercices_encap.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

#include <World.h>
int main()
{
    /*
    std::cout << "Hello World!\n";
    StaticObject so;
    BreakableObject bo;
    Mob* mob = new Mob();
    Player player;

    std::cout << player.isAlive() << std::endl;
    std::cout << player.getVie() << std::endl;
    player.attaquer(mob);
    */
    World world;
    world.init();
    do {
        world.step();
        std::cout << "______________" << std::endl;
    } while (!world.getIsFinished());
        

    



}

