#pragma once

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {

public:
	Player();
	Player(float x, float y, float vie, Vector2 direction, float vitesse);

	void subirDegats(float degats) override;
	void deplacer() override;
	bool isAlive() override;
	void attaquer(Alive* vivant) override;


};
