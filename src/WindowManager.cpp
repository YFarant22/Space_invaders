#include "../headers/WindowManager.h"

WindowManager::WindowManager()
{
	_width = 1920;
	_height = 1080;
	_name = "Game";

	_window.create(sf::VideoMode(_width, _height), _name);
}

WindowManager::WindowManager(int _width, int height, sf::String name)
{
	_window.create(sf::VideoMode(_width, _height), _name);
}

void WindowManager::close_window()
{
	_window.close();
}