#pragma once
#include "Scene.h"
#include <map>
#include <memory>
#include <string>
#include <vector>
#include <utility>
#include <SFML\Graphics.hpp>

class TextureHolder
{
public:
	TextureHolder();
	TextureHolder(std::vector<std::string> paths);
	TextureHolder(std::vector<std::string> paths, std::vector<std::string> IDs);

	~TextureHolder();
	std::map<std::string, std::unique_ptr<sf::Texture> > texturemap;
	int numOfTextures = 0;
	bool isIdNumerical = false;
	
private:
	void load(std::vector<std::string> paths);

	std::map<std::string, std::string> IDmap;
};

