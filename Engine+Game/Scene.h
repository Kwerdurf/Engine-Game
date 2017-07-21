#ifndef SCENE_H
#define SCENE_H
#include <SFML\Graphics.hpp>
#include <vector>
#include <string>
#include "TextureHolder.h"
#include "Entity.h"


class Scene
{
public:
	Scene();
	Scene(std::vector<Entity> entities);
	~Scene();


	std::vector<Entity> entities;
	
private:
	TextureHolder textureHolder;

	
};

#endif