#include <SFML/Graphics.hpp>
#include "Game.h"
#include <iostream>
#include <cmath>
int main()
{

	Game game(1);
	/*DEBUG
	sf::Texture texture;
	if (!texture.loadFromFile("White_square.png", sf::IntRect(10, 10, 32, 32))) {
		printf("CHUJ");
	}

	sf::Sprite spiryt;
	spiryt.setTexture(texture);
	

	game.levels[0].sprites.push_back(spiryt);

	DEBUG*/

	game.run();
	std::cout << atan(-1.88);
	std::cin.get();
	return 0;
}
 