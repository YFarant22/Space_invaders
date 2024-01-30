#pragma once
#include <SFML/Window/Event.hpp>
#include "WindowManager.h"
#include "Spaceship.h"
#include "Alien.h"

class GameManager
{
private:
	WindowManager* m_window;
	Spaceship* m_player;
	sf::Event _evt;
	std::vector<Alien *> m_ennemies;

public:
	GameManager();

	void init_spaceship();
	void init_ennemies();

	int GameLoop();
	void event_controller(sf::RenderWindow* window);
	void update_screen(sf::RenderWindow* window);
	void free_objects();
};

