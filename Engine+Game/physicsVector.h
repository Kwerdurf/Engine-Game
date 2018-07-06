#ifndef PHYSICSVECTOR_H
#define PHYSICSVECTOR_H
#include <cmath>
#include "position.h"

class physicsVector
{
public:
	physicsVector();
	physicsVector(double val, double angle);//angle in radians
	~physicsVector();
	double val=0, angle=0;

};
#endif
