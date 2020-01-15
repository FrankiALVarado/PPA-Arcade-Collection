#pragma once
#include "imgui.h"
#include "imgui-SFML.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/CircleShape.hpp>
class Game
{
public:
	virtual void init() = 0;
	virtual void run() = 0;
	virtual void exit() = 0;
};

