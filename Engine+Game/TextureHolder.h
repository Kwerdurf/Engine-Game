#pragma once
#include "Scene.h"
#include <map>
#include <memory>
#include <SFML\Graphics.hpp>

class TextureHolder
{
public:
	TextureHolder();
	~TextureHolder();

	void load();
private:
	std::map<std::string, std::unique_ptr<sf::Texture> > texturemap;
};

