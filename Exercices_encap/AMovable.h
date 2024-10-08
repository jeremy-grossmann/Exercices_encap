#pragma once

#include "Vector2.h"

class AMovable {

	float vitesse;
	Vector2 direction;

public:

	AMovable(Vector2 _direction, float vitesse);

	virtual void setDirection(Vector2 _direction);
	virtual void setVitesse(float _vitesse);
	virtual void deplacer() = 0;


};