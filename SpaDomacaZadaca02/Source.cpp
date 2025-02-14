#include <SFML/Graphics.hpp>
#include "UI.h"

int main() {

	sf::RenderWindow window(sf::VideoMode(800, 600), "Conway's Game of Life", sf::Style::Titlebar | sf::Style::Close);
	window.setVerticalSyncEnabled(true);
	UI ui(&window, 32, 28);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		ui.run();
		//window.display();
	}

	return 0;
}
