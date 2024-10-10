#pragma once

#include "Vector2.h"

class AMovable {

	float vitesse;
	Vector2 direction;

public:

	AMovable();
	AMovable(Vector2 _direction, float vitesse);

	virtual void setDirection(Vector2 _direction);
	virtual void setDirection(float x, float y);
	virtual void setVitesse(float _vitesse);
	virtual Vector2 getDirection();
	float getVitesse();
	virtual void deplacer() = 0;
	


};