#include "BreakableObject.h"
#include <iostream>

BreakableObject::BreakableObject(float _x, float _y, float _vie) : Entity(_x, _y), Alive(_vie)
{
	std::cout << "Breakable Object just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << " with " << getMaxVie() << " points de vie";
}

void BreakableObject::subirDegats(float degats)
{
	Alive::subirDegats(degats);
	std::cout << "Breakable Object just broke";
}
