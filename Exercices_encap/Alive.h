#pragma once

class Alive {

	float maxVie;
	float vie;

public:
	
	Alive();
	Alive(float vie);

	virtual float getMaxVie();
	virtual float getVie();
	virtual void subirDegats(float degats);
	bool isAlive();

};