#pragma once

#include "Vector2.h"

class AMovable {
public:
	float vitesse;
	Vector2 direction;

	AMovable(Vector2 _direction, float vitesse);
};