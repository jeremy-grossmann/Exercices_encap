#pragma once
#include  <vector>
#include <Entity.h>

class World {

	std::vector<Entity*> entities;

public:

	void init();
	void step();

};