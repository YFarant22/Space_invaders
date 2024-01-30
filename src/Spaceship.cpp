#include "Spaceship.h"

Spaceship::Spaceship(sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
	_body.setPosition(pos);
	_body.setSize(size);
	_body.setFillColor(color);

	_speed = 5.0;
	_lifes = 3;
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

void Spaceship::move_left()
{
	_body.move(sf::Vector2f{-_speed, 0});
}

void Spaceship::move_right()
{
	_body.move(sf::Vector2f{_speed, 0 });
}

void Spaceship::move_up()
{
	_body.move(sf::Vector2f{0, -_speed});
}

void Spaceship::move_down()
{
	_body.move(sf::Vector2f{0, _speed });
}

void Spaceship::move_player()
{
	if (_mvi.right) {
		move_right();
	}
	else if (_mvi.left) {
		move_left();
	}
	if (_mvi.up) {
		move_up();
	}
	else if (_mvi.down) {
		move_down();
	}
}

void Spaceship::set_Mvi(sf::Event event)
{
	if (event.key.code == sf::Keyboard::Right) {
		_mvi.right = true;
	}
	else if (event.key.code == sf::Keyboard::Left) {
		_mvi.left = true;
	}

	if (event.key.code == sf::Keyboard::Up) {
		_mvi.up = true;
	}
	if (event.key.code == sf::Keyboard::Down) {
		_mvi.down = true;
	}
}

void Spaceship::set_stopMvi(sf::Event event)
{
	if (event.key.code == sf::Keyboard::Right) {
		_mvi.right = false;
	}
	else if (event.key.code == sf::Keyboard::Left) {
		_mvi.left = false;
	}

	if (event.key.code == sf::Keyboard::Up) {
		_mvi.up = false;
	}
	else if (event.key.code == sf::Keyboard::Down) {
		_mvi.down = false;
	}
}

void Spaceship::draw_spaceship(sf::RenderWindow* window)
{
	window->draw(_body);
}

void Spaceship::free_spaceship()
{
}
