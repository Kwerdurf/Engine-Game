#pragma once
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


	position coords;
	

private:
	void updatePosition(position newPos);

};

