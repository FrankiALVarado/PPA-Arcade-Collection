#pragma once
#include "Game.h"
#include "CPlayer.h"

class CBreakOut : public Game
{
	CPlayer PLayer;
	sf::RenderWindow window;
	sf::Time TimePerFrame = sf::seconds(1.f / 60.f);

	CBreakOut();
	void init();
	void run();
	void exit();
	void SetPlayer();
	void processEvents();
	void Render();
};

