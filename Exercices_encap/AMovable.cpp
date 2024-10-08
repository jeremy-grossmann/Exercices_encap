#include "AMovable.h"

AMovable::AMovable(Vector2 _direction, float _vitesse) : direction(_direction), vitesse(_vitesse)
{
}

void AMovable::setDirection(Vector2 _direction)
{
	direction.setX(_direction.getX());
	direction.setY(_direction.getY());
}

void AMovable::setVitesse(float _vitesse)
{
	vitesse = _vitesse;
}


