#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>
#include "moveInputs.h"

class Spaceship
{
private:
	sf::RectangleShape _body;
	int _lifes;
	float _speed;
	moveInputs _mvi;

public:
	Spaceship(sf::Vector2f pos, sf::Vector2f size, sf::Color);

	void set_position(sf::Vector2f position);
	void set_size(sf::Vector2f size);
	void set_color(sf::Color color);
	void set_color(int r, int g, int b, int a);

	sf::Vector2f get_position();
	sf::Vector2f get_size();
	sf::Color get_color();
	sf::RectangleShape get_body();

	void move_left();
	void move_right();
	void move_up();
	void move_down();
	void move_player();
	void draw_spaceship(sf::RenderWindow* window);
	void free_spaceship();

	void set_Mvi(sf::Event event);
	void set_stopMvi(sf::Event event);
};

