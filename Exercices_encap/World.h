#pragma once
#include  <vector>
#include <Entity.h>

class World {

	std::vector<Entity*> entities;
	bool isFinished = false;

public:

	void init();
	void step();
	Vector2 calculVecteur(Entity* pointA, Entity* pointB);
	bool getIsFinished();

};