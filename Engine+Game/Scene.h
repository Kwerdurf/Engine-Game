#ifndef SCENE_H
#define SCENE_H
#include <SFML/Graphics.hpp>
#include <vector>
#include "TextureHolder.h"
#include "Entity.h"


class Scene
{
public:
	Scene();
	Scene(std::vector<Entity> entities);
	~Scene();

	void addEntity(Entity entity);

	std::vector<Entity> entities;
	
private:
	TextureHolder textureHolder;

	
};

#endif