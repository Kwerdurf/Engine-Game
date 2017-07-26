#include "PhysicsInstance.h"
#include <cmath>
#define PI 3.141592653589793

PhysicsInstance::PhysicsInstance()
{
}


PhysicsInstance::~PhysicsInstance()
{
}

physicsVector PhysicsInstance::calcMomentum(physicsVector other_momentum)
{
	double x1, y1, x2, y2;
	x1 = momentum.val * cos(momentum.angle * PI / 180.0);
	y1 = momentum.val * sin(momentum.angle * PI / 180.0);
	x2 = other_momentum.val * cos(other_momentum.angle * PI / 180.0);
	y2 = other_momentum.val * sin(other_momentum.angle * PI / 180.0);
	double x, y;
	x = x1 + x2;
	y = y1 + y2;
	double val,ang;
	val = sqrt(x*x + y*y);
	ang = atan(y / x);

	if (x < 0) {
		if (y < 0)
			ang += PI;
		else
			ang = PI - ang;
	}
	else {
		if (y < 0)
			ang = 2 * PI - ang;
	}

	return physicsVector(val, ang * 180 / PI);
}
