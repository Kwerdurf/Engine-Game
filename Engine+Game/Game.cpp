#include "Game.h"
#include "Scene.h"
#include <stdlib.h>


Game::Game() : gameWindow(sf::VideoMode(640, 480), "Game") {
	levels.push_back(Scene());

	activeScene = &levels[0];
}


Game::Game(int lvls) : gameWindow(sf::VideoMode(640, 480), "Game")
{
	
	for (int i = 0; i < lvls; i++)
		levels.push_back(Scene());
	activeScene = &levels[0];


}


Game::~Game()
{
}

void Game::run()
{
	sf::Clock clock;
	sf::Time timeLastUpdate = sf::Time::Zero;
	while (gameWindow.isOpen()) {
		processEvents();
		timeLastUpdate += clock.restart();
		while (timeLastUpdate > TimePerFrame) {
			timeLastUpdate -= TimePerFrame;
			processEvents();
			update(TimePerFrame);
		}
		render(*activeScene);
	}
}

void Game::processEvents()
{
	sf::Event e;
	while (gameWindow.pollEvent(e)) {
		//GENERAL EVENTS
		if (e.type == sf::Event::Closed)
			gameWindow.close();



	}
}

void Game::update(sf::Time time)
{

}

void Game::render(Scene lvl)
{
	
	gameWindow.clear();
	//gameWindow.draw(lvl.entities[0]);//EDIT
	gameWindow.display();

}
