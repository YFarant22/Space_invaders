#include "Alien.h"

Alien::Alien(sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
	_body.setPosition(pos);
	_body.setSize(size);
	_body.setFillColor(color);

	_speed = 5.0;
}

void Alien::set_position(sf::Vector2f pos)
{
	_body.setPosition(pos);
}

void Alien::set_size(sf::Vector2f size)
{
	_body.setSize(size);
}

void Alien::set_color(sf::Color color)
{
	_body.setFillColor(color);
}

void Alien::set_color(int r, int g, int b, int a)
{
	_body.setFillColor(sf::Color(r, g, b, a));
}

sf::Vector2f Alien::get_position()
{
	return _body.getPosition();
}

sf::Vector2f Alien::get_size()
{
	return _body.getSize();
}

sf::Color Alien::get_color()
{
	return _body.getFillColor();
}

sf::RectangleShape Alien::get_body()
{
	return _body;
}

void Alien::move_left()
{
	_body.move(sf::Vector2f{ -_speed, 0 });
}

void Alien::move_right()
{
	_body.move(sf::Vector2f{ _speed, 0 });
}

void Alien::move_up()
{
	_body.move(sf::Vector2f{ 0, -_speed });
}

void Alien::move_down()
{
	_body.move(sf::Vector2f{ 0, _speed });
}
void Alien::draw_alien(sf::RenderWindow* window)
{
	window->draw(_body);
}

void Alien::free_alien()
{
}