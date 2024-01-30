#include "GameManager.h"
#include <iostream>

GameManager::GameManager()
{
	m_window = new WindowManager(800, 1080, "Simple 2D Game");
	m_window->get_window()->setFramerateLimit(60);
}

void GameManager::init_spaceship()
{	
	sf::Vector2f pos = { 400.0, 800.0 };
	sf::Vector2f size = { 20.0, 20.0 };
	sf::Color col = sf::Color::Blue;

	m_player = new Spaceship(pos, size, col);
}

void GameManager::init_ennemies()
{
	sf::Vector2f pos = { 50, 200.0 };
	sf::Vector2f size = { 50, 50.0 };
	sf::Color col = sf::Color::Red;

	for (int yndex = 0; yndex < 5; yndex++) {
		for (int index = 0; index < 5; index++) {
			m_ennemies.push_back(new Alien(pos, size, col)); 
			pos.x += 150;
		}
		pos.x = 50;
		pos.y += 60;
	}
}

void GameManager::event_controller(sf::RenderWindow* window)
{
	while (window->pollEvent(_evt)) {
		if (_evt.type == sf::Event::Closed) {
			window->close();
		} 
		if (_evt.type == sf::Event::KeyPressed) {
			m_player->set_Mvi(_evt);
		} 
		if (_evt.type == sf::Event::KeyReleased) {
			m_player->set_stopMvi(_evt);
		}
	}
}

void GameManager::update_screen(sf::RenderWindow* window)
{
	window->clear(sf::Color::Black);
	/////////////////////////////////

	window->draw(m_player->get_body());
	for (Alien * var: m_ennemies)
	{
		window->draw(var->get_body());
	}
	/////////////////////////////////
	window->display();
}

int GameManager::GameLoop()
{
	sf::RenderWindow* window = m_window->get_window();
	init_spaceship();
	init_ennemies();

	while (window->isOpen())
	{
		event_controller(window);
		m_player->move_player();
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

