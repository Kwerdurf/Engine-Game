#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>
#include <string>
#include "PhysicsInstance.h"

class Entity
{
public:
	Entity();
	Entity(const Entity & ent) = default;/*copied entity has newly initialized physics TODO add a constructor for copying physics too
	maybe change the constructor to copy physicsInstance  */
	Entity(Entity&& ent) = default;
	//TODO: create a constructor for different (making sense) arguments
	//Entity(sf::Sprite s, std::string textureID, )
	virtual ~Entity() = default;


	Entity& operator=(Entity& ent) = default;
	Entity& operator=(Entity&& ent) = default;		
	sf::Sprite sprite;
	std::string texture_id;

	bool is_movable, is_collidable, is_controllable;

	PhysicsInstance physicsInstance;
};
#endif
