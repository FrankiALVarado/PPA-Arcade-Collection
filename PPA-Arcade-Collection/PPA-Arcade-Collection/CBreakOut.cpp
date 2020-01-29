#include "CBreakOut.h"

CBreakOut::CBreakOut()
	:window(sf::VideoMode(800, 900), "Break Out")
{
}

void CBreakOut::init()
{
}

void CBreakOut::run()
{
	window.setFramerateLimit(60);
	
	
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Clock deltaClock;
	SetPlayer();
	while (window.isOpen()) {
		
		processEvents();
		timeSinceLastUpdate += deltaClock.restart();
		while (timeSinceLastUpdate > TimePerFrame)
		{
			/*while (window.pollEvent(event)) {

				if (event.type == sf::Event::Closed) {
					window.close();
				}
			}*/

			//ImGui::SFML::Update(window, deltaClock.restart());

			//window.clear();
			//ImGui::SFML::Render(window);
			window.display();
		}
	}
}

void CBreakOut::exit()
{
}

void CBreakOut::SetPlayer()
{
	PLayer.P1.setSize(sf::Vector2f(40, 10));
	PLayer.P1.setPosition(sf::Vector2f(400, 890));
}

void CBreakOut::processEvents()
{
}
