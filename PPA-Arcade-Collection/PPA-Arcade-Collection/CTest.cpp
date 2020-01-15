#include "CTest.h"

void CTest::init()
{

}

void CTest::run()
{
	sf::RenderWindow window(sf::VideoMode(640, 480), "Nos vamos a morir <3");
	window.setFramerateLimit(60);
	ImGui::SFML::Init(window);

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

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

		ImGui::Begin("Hello, world!");
		ImGui::Button("FFFFFFFFF");
		ImGui::End();

		window.clear();
		window.draw(shape);
		ImGui::SFML::Render(window);
		window.display();
	}

	ImGui::SFML::Shutdown();
}

void CTest::exit()
{
}
