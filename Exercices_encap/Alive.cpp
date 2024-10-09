#include "Alive.h"

Alive::Alive() : vie(0), maxVie(0)
{
}

Alive::Alive(float _vie) : vie(_vie), maxVie(_vie)
{
}

float Alive::getMaxVie()
{
	return maxVie;
}

float Alive::getVie()
{
	return vie;
}

void Alive::subirDegats(float degats)
{
	vie -= degats;
}
