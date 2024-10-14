#include "World.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <iostream>

void World::init()
{
	entities.push_back(new StaticObject());
	entities.push_back(new BreakableObject(10.0, 10.0, 1.0));
	entities.push_back(new Mob(5.0, 5.0, 20.0, Vector2(1.0, 1.0), 1.0));
	entities.push_back(new Player(20.0, 20.0, 10.0, Vector2(1.0, 1.0), 1.0));
	std::cout << "init" << std::endl;

}

void World::step()
{
	for (Entity* entity : entities)
	{
		if (dynamic_cast <Mob*>(entity)) {
			for (Entity* ent : entities)
			{
				if (dynamic_cast <BreakableObject*>(ent)) {

					AMovable* tmpEntity = dynamic_cast <AMovable*>(entity);
					tmpEntity->setDirection(calculVecteur(entity, ent));
					tmpEntity->deplacer();

				}
			}
			

		}
		if (Player* tmpEntity = dynamic_cast<Player*>(entity)) {
			for (Entity* ent : entities)
			{
				if (dynamic_cast<Mob*>(ent)) {
					Mob* tmpEnt = dynamic_cast <Mob*>(ent);
					if (tmpEnt->isAlive()) {
						tmpEntity->setDirection(calculVecteur(entity, ent));
						tmpEntity->deplacer();

						float dirX = tmpEnt->getPosition().getX() - tmpEntity->getPosition().getX();
						float dirY = tmpEnt->getPosition().getY() - tmpEntity->getPosition().getY();

						float distance = sqrt(dirX * dirX + dirY * dirY);
						if (distance < 1) {
							tmpEntity->attaquer(tmpEnt);
						}
					}
					else {
						for (Entity* e : entities)
						{
							if (dynamic_cast<BreakableObject*>(e)) {
								BreakableObject* tmpE = dynamic_cast <BreakableObject*>(e);
								tmpEntity->setDirection(calculVecteur(entity, e));
								tmpEntity->deplacer();

								float dirX = tmpE->getPosition().getX() - tmpEntity->getPosition().getX();
								float dirY = tmpE->getPosition().getY() - tmpEntity->getPosition().getY();

								float distance = sqrt(dirX * dirX + dirY * dirY);
								if (distance < 1) {
									tmpEntity->attaquer(tmpE);
								}
							}

						}
					}
				}
				
			}

		}
	}

	bool allDead = true;
	for (Entity* entity : entities)
	{
		if (BreakableObject* tmp = dynamic_cast <BreakableObject*>(entity)) {
			if (tmp->isAlive()) {
				allDead = false;
				break;
			}
		}
		if (Mob* tmp = dynamic_cast <Mob*>(entity)) {
			if (tmp->isAlive()) {
				allDead = false;
				break;
			}
		}
	}
	if (allDead) {
		std::cout << "Simulation finished" << std::endl;
	}
	isFinished = allDead;
	
}

Vector2 World::calculVecteur(Entity* pointA, Entity* pointB)
{
	float dirX = pointB->getPosition().getX() - pointA->getPosition().getX();
	float dirY = pointB->getPosition().getY() - pointA->getPosition().getY();

	float distance = sqrt(dirX * dirX + dirY * dirY);

	return Vector2(dirX / distance, dirY / distance);
}

bool World::getIsFinished()
{
	return isFinished;
}
