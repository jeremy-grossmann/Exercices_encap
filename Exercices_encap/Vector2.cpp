#include "Vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y)
{
}

Vector2::Vector2() : x(0.f), y(0.f)
{
}

float Vector2::getX()
{
    return x;
}

float Vector2::getY()
{
    return y;
}

void Vector2::setX(float x)
{
    this->x = x;
}

void Vector2::setY(float y)
{
    this->y = y;
}
