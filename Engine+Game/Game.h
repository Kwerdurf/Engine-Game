#pragma once
#include "Scene.h"
#include "SFML\Graphics.hpp"


class Game
{
public:
	Game();
	Game(int lvls);
	~Game();
	void run();

	Scene* levels;
private:
	void processEvents();
	void update();
	void render(Scene lvl);

	sf::Window gameWindow;
	
};

