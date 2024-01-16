#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(sf::Vector2f pos, sf::Vector2f size, sf::Color color) : GameObject(pos, size, color)
{
	std::cout << "appel du constructeur rectangle" << std::endl;
}	