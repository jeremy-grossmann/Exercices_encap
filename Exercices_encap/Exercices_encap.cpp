// Exercices_encap.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

int main()
{
    std::cout << "Hello World!\n";
    StaticObject so;
    BreakableObject bo;
    Mob* mob = new Mob();
    Player player;

    std::cout << player.isAlive() << std::endl;
    std::cout << player.getVie() << std::endl;
    player.attaquer(mob);



}

