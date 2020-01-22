#pragma once
#include "Game.h"

class PacMan :
	public Game
{
private:
	static const int m_width = 28;
	static const int m_height = 31;
	int m_tileDimension = 20;
public:
	int m_MapGrid[m_width * m_height];

	void init();
	void run();
	void exit();

	void drawMap(sf::RenderWindow* window);
};

