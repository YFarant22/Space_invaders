#include "Spaceship.h"

Spaceship::Spaceship(sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
	_body.setPosition(pos);
	_body.setSize(size);
	_body.setFillColor(color);
}

void Spaceship::set_position(sf::Vector2f pos)
{
	_body.setPosition(pos);
}

void Spaceship::set_size(sf::Vector2f size)
{
	_body.setSize(size);
}

void Spaceship::set_color(sf::Color color)
{
	_body.setFillColor(color);
}

void Spaceship::set_color(int r, int g, int b, int a)
{
	_body.setFillColor(sf::Color(r,g,b,a));
}

sf::Vector2f Spaceship::get_position()
{
	return _body.getPosition();
}

sf::Vector2f Spaceship::get_size()
{
	return _body.getSize();
}

sf::Color Spaceship::get_color()
{
	return _body.getFillColor();
}

sf::RectangleShape Spaceship::get_body()
{
	return _body;
}

void Spaceship::draw_spaceship(sf::RenderWindow* window)
{
	window->draw(_body);
}

void Spaceship::free_spaceship()
{
}
