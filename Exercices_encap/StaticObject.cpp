#include "StaticObject.h"
#include <iostream>


StaticObject::StaticObject(float _x, float _y) : Entity(_x, _y)
{
	std::cout << "Static Object just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << std::endl;
}

StaticObject::StaticObject() : Entity()
{
	std::cout << "Static Object just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << std::endl;
}
