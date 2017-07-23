#pragma once
#include <cmath>
#include "position.h"

class physicsVector
{
public:
	physicsVector();
	physicsVector(double val, double angle, bool dir);
	~physicsVector();
	bool dir = false;
	double val=0, angle=0;

};

