#ifndef POSITION_H
#define POSITION_H
class position
{
public:
	position();
	position(int x, int y, int z);
	~position();

	int x, y, z;
	
	position operator=(const position& other);
	bool operator==(const position & other);
};

#endif