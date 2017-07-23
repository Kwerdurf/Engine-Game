#ifndef TEXTUREHOLDER_H
#define TEXTUREHOLDER_H
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
	std::map<std::string, std::shared_ptr<sf::Texture> > texturemap;
	int numOfTextures = 0;
	bool isIdNumerical = false;
	
private:
	void load(std::vector<std::string> paths);

	std::map<std::string, std::string> IDmap;//path, ID
};

#endif