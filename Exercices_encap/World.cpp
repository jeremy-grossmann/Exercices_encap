#include "World.h"
#include <StaticObject.h>
#include <BreakableObject.h>
#include <Mob.h>
#include <Player.h>

void World::init()
{
	entities.push_back(new StaticObject());
	entities.push_back(new BreakableObject(10.0, 10.0, 1.0));
	entities.push_back(new Mob(5.0, 5.0, 20.0, Vector2(1.0, 1.0), 1.0));
	entities.push_back(new Player(20.0, 20.0, 10.0, Vector2(1.0, 1.0), 2.0));

}

void World::step()
{
	for (Entity* entity : entities)
	{
		if (dynamic_cast <Mob*>(entity)) {
			float dirX = entity->getPosition().getX() - entity->getPosition().getX();
			double dirY = objet.y - joueur.y;

			// Calculer la norme du vecteur de direction
			double norme = std::sqrt(dirX * dirX + dirY * dirY);

		}
	}
}
