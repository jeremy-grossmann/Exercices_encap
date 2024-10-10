#include "Alive.h"

class IAttacker {
public:
	virtual void attaquer(Alive* vivant) = 0;
};