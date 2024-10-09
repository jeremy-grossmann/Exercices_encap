#pragma once

#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive {
public:
	BreakableObject();
	BreakableObject(float x, float y, float vie);
	void subirDegats(float degats) override;
};
