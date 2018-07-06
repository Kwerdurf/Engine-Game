#include "TextureHolder.h"
#include <SFML\Graphics.hpp>


TextureHolder::TextureHolder()
{
	
}

TextureHolder::TextureHolder(std::vector<std::string> paths)
{
	for (int i = 0; i < paths.size(); i++) {
		IdMap.insert(std::pair<std::string, std::string>( paths[i], "" + i ));
		numOfTextures++;
		load(paths);
	}
}

TextureHolder::TextureHolder(std::vector<std::string> paths, std::vector<std::string> IDs)
{
	isIdNumerical = true;
	for (int i = 0; i < paths.size(); i++) {
		IdMap.insert(std::pair<std::string, std::string>(paths[i], IDs[i]));
		numOfTextures++;
		load(paths);
	}
}


TextureHolder::~TextureHolder()
{
}

void TextureHolder::load(std::vector<std::string> paths)
{
	for (int i = 0; i < paths.size(); i++) {
		std::shared_ptr<sf::Texture> texture( new sf::Texture() );
		texture->loadFromFile(paths[i]);
		texturemap.insert(std::make_pair( IdMap.at(paths[i]), std::move(texture)));
	}
}



