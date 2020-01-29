#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RectangleShape.hpp>


class CPlayer
{
public:
	sf::RectangleShape P1;

private:
	//Velocidad de jugador en flotante
	float mSpeed = 70;

	//Banderas para determinar hacia donde moverse
	bool mIsMovingLeft = true;
	bool mIsMovingRight = true;
};

