#include <SFML/Graphics.hpp>
#include "Game.h"
#include "position.h"
#include <iostream>

int main()
{
	position pos1, pos2;
	pos1 = pos2 = position(1, 1, 1);
	pos2.y = 2;
	std::cout << (pos1 == pos2);
	int a;
	std::cin >> a;
	//Game game(1);
	/*DEBUG
	sf::Texture texture;
	if (!texture.loadFromFile("White_square.png", sf::IntRect(10, 10, 32, 32))) {
		printf("CHUJ");
	}

	sf::Sprite spiryt;
	spiryt.setTexture(texture);
	

	game.levels[0].sprites.push_back(spiryt);

	DEBUG*/

	//game.run();



	return 0;
}
 