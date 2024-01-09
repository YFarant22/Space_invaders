#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>

#pragma once
class GameObject
{
	sf::Vector2f _pos;
	sf::Vector2f _size;
	sf::Color _col;

public:
	GameObject();

	void set_position(sf::Vector2f position);
	void set_size(sf::Vector2f size);
	void set_color(sf::Color color);
	void set_color(int r, int g, int b, int a);

	sf::Vector2f get_position();
	sf::Vector2f get_size();
	sf::Color get_color();
};

