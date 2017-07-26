#pragma once
#include <cmath>
#include "position.h"
#include "physicsVector.h"
/*
p=m*v

*/
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
	
	physicsVector calcMomentum(physicsVector other_momentum);
	physicsVector calcForce(physicsVector otherForce);
	physicsVector calcAccel();
	physicsVector calcVelocity();
	void updateProperties();
	void changePosition();
	void changePosition(position new_pos);



};

