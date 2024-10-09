#include "Entity.h"

Entity::Entity() : position()
{
}

Entity::Entity(Vector2 _position) : position(_position)
{
	//setPostion(position);
}

Entity::Entity(float _x, float _y) : position(_x, _y)
{
}

Vector2 Entity::getPosition()
{
	return position;
}

void Entity::setPostion(Vector2 _position)
{
	position.setX(_position.getX());
	position.setY(_position.getY());
}

void Entity::setPostion(float _x, float _y)
{
	position.setX(_x);
	position.setY(_y);
}
