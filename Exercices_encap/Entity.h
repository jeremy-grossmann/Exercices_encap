#pragma once

#include "Vector2.h"

class Entity {
public:
	Vector2 position;

	Entity(Vector2 _position);
	Entity(float _x, float _y);
	virtual Vector2 getPosition();
	virtual void setPostion(Vector2 position);
};
