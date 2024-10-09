#include "AMovable.h"

AMovable::AMovable() : direction(Vector2()), vitesse(0)
{
}

AMovable::AMovable(Vector2 _direction, float _vitesse) : direction(_direction), vitesse(_vitesse)
{
}

void AMovable::setDirection(Vector2 _direction)
{
	direction.setX(_direction.getX());
	direction.setY(_direction.getY());
}

void AMovable::setDirection(float _x, float _y)
{
	direction.setX(_x);
	direction.setY(_y);
}

void AMovable::setVitesse(float _vitesse)
{
	vitesse = _vitesse;
}

Vector2 AMovable::getDirection()
{
	return direction;
}


