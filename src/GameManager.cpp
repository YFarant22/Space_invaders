#include "GameManager.h"
#include <SFML/Window/Event.hpp>
#include <iostream>

GameManager::GameManager()
{
	m_window = new WindowManager(800, 1080, "Simple 2D Game");
}

void GameManager::init_spaceship()
{	
	sf::Vector2f pos = { 400, 800 };
	sf::Vector2f size = { 20, 20 };
	sf::Color col = sf::Color::Blue;

	m_player = new Spaceship(pos, size, col);
}

void GameManager::update_screen(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	/////////////////////////////////

	window->draw(m_player->get_body());

	/////////////////////////////////
	window->display();
}

int GameManager::GameLoop()
{
	sf::RenderWindow* window = m_window->get_window();
	init_spaceship();
	sf::Event evt;

	while (window->isOpen())
	{
		while (window->pollEvent(evt)) {
			if (evt.type == sf::Event::Closed) {
				window->close();
			}
		}
		update_screen(window);
	}
	free_objects();
	return (0);
}

void GameManager::free_objects()
{
	free(m_window);
	free(m_player);
}

