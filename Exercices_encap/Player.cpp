#include "Player.h"
#include <iostream>

Player::Player() : Entity(), Alive(), AMovable()
{
	std::cout << "Player just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << "with " << getMaxVie() << " hp with direction x = " << getDirection().getX() << " and y = " << getDirection().getY() << std::endl;
}

Player::Player(float _x, float _y, float _vie, Vector2 _direction, float _vitesse) : Entity(_x, _y), Alive(_vie), AMovable(_direction, _vitesse)
{
	std::cout << "Player just created at x = " << getPosition().getX() << " and y = " << getPosition().getY() << "with " << getMaxVie() << " hp with direction x = " << getDirection().getX() << " and y = " << getDirection().getY() << std::endl;
}

void Player::subirDegats(float degats)
{
	Alive::subirDegats(degats);
	std::cout << "Player just died" << std::endl;

}

void Player::deplacer()
{
	if (isAlive()) {
		setPostion((getPosition().getX() + getDirection().getX()) * getVitesse(), (getPosition().getY() + getDirection().getY()) * getVitesse());
		std::cout << "Player move to x = " << getPosition().getX() << " and y = " << getPosition().getY() << std::endl;
	}
}


void Player::attaquer(Alive* vivant)
{
	vivant->subirDegats(10);
	std::cout << "Player just attacked" << std::endl;
}






