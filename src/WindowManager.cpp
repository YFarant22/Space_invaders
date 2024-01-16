#include "../headers/WindowManager.h"

WindowManager::WindowManager(int width, int height, sf::String name)
{
	_width = width;
	_height = height;
	_name = name;

	_window = new sf::RenderWindow(sf::VideoMode(_width, _height), _name);
}

sf::RenderWindow* WindowManager::get_window()
{
	return _window;
}

void WindowManager::close_window()
{
	_window->close();
}