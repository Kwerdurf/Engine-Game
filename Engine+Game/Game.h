#pragma once
#include "Scene.h"
#include <vector>
#include "SFML\Graphics.hpp"


class Game
{
public:
	Game();
	Game(int lvls);
	~Game();
	void run();

	std::vector<Scene> levels;
private:
	void processEvents();
	void update();
	void render(Scene lvl);

	sf::RenderWindow gameWindow;
	
};

