#include <iostream>
#include "GameObject.h"

GameObject::GameObject(sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
	_pos = pos;
	_size = size;
	_col = color;
}

void GameObject::set_position(sf::Vector2f position)
{
	_pos = position;
}

void GameObject::set_size(sf::Vector2f size)
{
	_size = size;
}


void GameObject::set_color(sf::Color color)
{
	_col = color;
}

void GameObject::set_color(int r, int g, int b, int a = 255)
{
	_col.r = r;
	_col.g = g;
	_col.b = b;
	_col.a = a;
}

sf::Vector2f GameObject::get_position()
{
	return (_pos);
}

sf::Vector2f GameObject::get_size()
{
	return (_size);
}

sf::Color GameObject::get_color()
{
	return (_col);
}