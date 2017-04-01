#pragma once
#include <SFML\Graphics.hpp>
#include <utility>


class Entity
{
public:
	Entity();
	~Entity();

	sf::Sprite sprite;
	sf::Texture texture;
	bool movable, collidable;


	double width, height;
	std::pair<float, float> position;

private:
	void updatePosition();

};

