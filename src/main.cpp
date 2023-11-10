#include <SFML/Graphics.hpp>
#include <iostream>


void movePlayer() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		std::cout << "I pressed a key woohoo" << std::endl;
}

int main()
{
    auto window = sf::RenderWindow{ { 800, 600 }, "DinoJump" };
    window.setFramerateLimit(60);
	sf::RectangleShape rect;


    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
			movePlayer();
        }

        window.clear();
        window.display();
    }
}