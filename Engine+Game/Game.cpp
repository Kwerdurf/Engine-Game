#include "Game.h"
#include "Scene.h"
#include <stdlib.h>


Game::Game(int lvls) : gameWindow(sf::VideoMode(640, 480), "Game"), levels((Scene*)malloc(lvls + 1))
{
	
}


Game::~Game()
{
}

void Game::run()
{
	while (gameWindow.isOpen()) {
		processEvents();
		update();
		render(levels[0]);
	}
}

void Game::processEvents()
{
	sf::Event e;
	while (gameWindow.pollEvent(e)) {
		if (e.type == sf::Event::Closed)
			gameWindow.close();
	}
}

void Game::update()
{
}

void Game::render(Scene lvl)
{
}
