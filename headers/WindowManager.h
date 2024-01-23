#include "SFML/Graphics/RenderWindow.hpp"

#pragma once
class WindowManager
{
	int _width;
	int _height;
	sf::RenderWindow* _window;

public:
	WindowManager(int _width, int height, sf::String name);
	sf::RenderWindow* get_window();
	void close_window();
};

