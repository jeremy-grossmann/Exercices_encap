#include "Entity.h"

Entity::Entity(Vector2 position)
{
	setPostion(position);
}

Vector2 Entity::getPosition()
{
	return position;
}

void Entity::setPostion(Vector2 position)
{
	this->position.setX(position.getX());
	this->position.setY(position.getY());
}
