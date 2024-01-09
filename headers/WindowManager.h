#include "SFML/Graphics/RenderWindow.hpp"

#pragma once
class WindowManager
{
	int _width;
	int _height;
	sf::String _name;
	sf::RenderWindow _window;

public:
	WindowManager();
	WindowManager(int _width, int height, sf::String name);
	void close_window();
};

