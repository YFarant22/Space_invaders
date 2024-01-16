#include "GameManager.h"
#include <SFML/Window/Event.hpp>
#include <iostream>

int GameManager::GameLoop()
{
	WindowManager m_window(800, 1080, "Simple 2D Game");
	sf::RenderWindow* window = m_window.get_window();
	sf::Event evt;

	while (window->isOpen())
	{

		while (window->pollEvent(evt)) {
			if (evt.type == sf::Event::Closed) {
				window->close();
			}
		}

		window->clear(sf::Color::Black);

		// TODO : draw here
		window->display();
	}

	return (0);
}