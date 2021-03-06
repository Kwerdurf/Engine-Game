#ifndef GAME_H
#define GAME_H
#include "Scene.h"
#include <vector>
#include <SFML/Graphics.hpp>


class Game
{
public:
	Game(int VideoMode_height=640, int VideoMode_width=480);
	Game(int lvls, int VideoMode_height = 640, int VideoMode_width = 480);
	~Game();
	void run();

	std::vector<Scene> levels;

private:
	void processEvents();
	void update(sf::Time time);
	void render(Scene lvl);
	void changeScene(Scene* newScene);


	sf::Time TimePerFrame = sf::seconds(1.f/60.f);
	Scene* activeScene;
	sf::RenderWindow gameWindow;
	
};

#endif