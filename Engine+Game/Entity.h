#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\Graphics.hpp>
#include <utility>
#include <string>
#include "position.h"
#include "PhysicsInstance.h"

class Entity
{
public:
	Entity();
	~Entity();

	sf::Sprite sprite;
	std::string textureID;

	bool isMovable, isCollidable, isControllable;

	PhysicsInstance physicsInstance;

	

private:
	void updatePosition(position newPos);

};
#endif
