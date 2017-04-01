#include "Entity.h"



Entity::Entity()
{
	
}


Entity::~Entity()
{
}

void Entity::updatePosition()
{
	sf::Vector2f pos = sprite.getPosition();
	position.first = pos.x;
	position.second = pos.y;
}
