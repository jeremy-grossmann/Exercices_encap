#include "Alive.h"

class IAttacker {
public:
	virtual bool isAlive() = 0;
	virtual void attaquer(Alive* vivant) = 0;
};