#pragma once
#include <cmath>
#include "position.h"
#include "physicsVector.h"

class PhysicsInstance
{
public:
	PhysicsInstance();
	~PhysicsInstance();

	double mass = 0.0;
	physicsVector momentum,
		force, accel,
		velocity;
	position coords = position(0, 0, 0);
};

