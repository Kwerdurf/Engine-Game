#pragma once
#include <SFML\Graphics.hpp>
#include <vector>
#include <string>
#include "Entity.h"

class Scene
{
public:
	Scene();
	~Scene();

	//bool isPlayable;

	std::vector<Entity> entities;
	
	
private:
	bool loadTextures();

	
};

