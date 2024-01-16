#include "SFML/Graphics/RectangleShape.hpp"
#include "GameObject.h"


#pragma once
class Rectangle : public GameObject
{
	sf::RectangleShape form;

public:
	Rectangle() = default;
	Rectangle(sf::Vector2f pos, sf::Vector2f size, sf::Color color);
};

