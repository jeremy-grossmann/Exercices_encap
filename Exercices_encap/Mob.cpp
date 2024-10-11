#include "Mob.h"
#include <iostream>


Mob::Mob() : Entity(), Alive(), AMovable()
{
	std::cout << "Mob just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << "with " << getMaxVie() << " hp with direction x = " << getDirection().getX() << " and y = " << getDirection().getY() << std::endl;
}

Mob::Mob(float _x, float _y, float _vie, Vector2 _direction, float _vitesse) : Entity(_x, _y), Alive(_vie), AMovable(_direction, _vitesse)
{
	std::cout << "Mob just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << "with " << getMaxVie() << " hp with direction x = " << getDirection().getX() << " and y = " << getDirection().getY() << std::endl;
}

void Mob::subirDegats(float degats)
{
	Alive::subirDegats(degats);
	std::cout << "Mob just die" << std::endl;
}

void Mob::deplacer()
{
	if (isAlive()) {
		setPostion((getPosition().getX() + getDirection().getX()) * getVitesse(), (getPosition().getY() + getDirection().getY()) * getVitesse());
		std::cout << "Mob move to x = " << getPosition().getX() << " and y = " << getPosition().getY() << std::endl;
	}
}
