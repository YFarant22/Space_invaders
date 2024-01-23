#pragma once

#include "WindowManager.h"
#include "Spaceship.h"

class GameManager
{
private:
	WindowManager* m_window;
	Spaceship* m_player;

public:
	GameManager();
	int GameLoop();
	void init_spaceship();
	void update_screen(sf::RenderWindow* window);
	void free_objects();
};

