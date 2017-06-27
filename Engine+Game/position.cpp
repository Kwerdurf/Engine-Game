#include "position.h"



position::position()
{
}

position::position(int x, int y, int z):x(x), y(y), z(z)
{
}


position::~position()
{
}

position position::operator=(const position & other)
{
	position pos;
	pos.x = this->x;
	pos.y = this->y;
	pos.z = this->z;


	return pos;
}

bool position::operator==(const position & other)
{
	return (this->x == other.x) && (this->y == other.y) && (this->z == other.z);
}

