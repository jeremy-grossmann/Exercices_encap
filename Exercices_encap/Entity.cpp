#include "Entity.h"

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
