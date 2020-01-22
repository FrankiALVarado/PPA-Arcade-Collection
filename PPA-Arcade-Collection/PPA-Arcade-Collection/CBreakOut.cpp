#include "CBreakOut.h"

void CBreakOut::init()
{
}

void CBreakOut::run()
{
	sf::RenderWindow window(sf::VideoMode(800, 900), "Break Out Chingon");
	window.setFramerateLimit(60);
	ImGui::SFML::Init(window);

	sf::Clock deltaClock;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			ImGui::SFML::ProcessEvent(event);

			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		ImGui::SFML::Update(window, deltaClock.restart());

		window.clear();
		ImGui::SFML::Render(window);
		window.display();
	}
}

void CBreakOut::exit()
{
}
