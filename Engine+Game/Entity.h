#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\Graphics.hpp>
#include <utility>
#include <string>
#include "position.h"


class Entity
{
public:
	Entity();
	~Entity();

	sf::Sprite sprite;
	std::string textureID;

	bool isMovable, isCollidable, isControllable;


	position coords = position(0,0,0);
	

private:
	void updatePosition(position newPos);

};
#endif
