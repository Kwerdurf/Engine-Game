#include "Game.h"
#include "Scene.h"



Game::Game(int VideoMode_height, int VideoMode_width) : gameWindow(sf::VideoMode(VideoMode_height,VideoMode_width), "Game") {
	levels.emplace_back(Scene());

	activeScene = &levels[0];
}


Game::Game(int lvls, int VideoMode_height, int VideoMode_width) : gameWindow(sf::VideoMode(VideoMode_height, VideoMode_width), "Game")
{
	
	for (int i = 0; i < lvls; i++)
		levels.emplace_back(Scene());
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
	//to be changed a lot
	gameWindow.clear();
	for (int i = 0; i < lvl.entities.size(); i++) {
		gameWindow.draw(lvl.entities[i].sprite);
	}
	gameWindow.display();

}
