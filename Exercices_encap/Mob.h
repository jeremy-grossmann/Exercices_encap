#pragma once

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable {
public:

	Mob();
	Mob(float x, float y, float vie, Vector2 direction, float vitesse);

	void subirDegats(float degats) override;
	void deplacer() override;
};
