#include "Player.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

const int WINDOW_HEIGHT = 600;
const int WINDOW_WIDTH = 800;

sf::Vector2f velocity;
sf::Clock deltaClock;
sf::Time dt;


void movePlayer(sf::Time dt, Player *rect) {
    velocity.x = 0.f;
    velocity.y = 0.f;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        velocity.y += -rect->getMoveSpeed() * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        velocity.y += rect->getMoveSpeed() * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        velocity.x += -rect->getMoveSpeed() * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        velocity.x += rect->getMoveSpeed() * dt.asSeconds();
    }
	rect->sprt.move(velocity);

	// Collision with edge of screen
    if (rect->sprt.getPosition().x < 0.f)
        rect->sprt.setPosition(0.f, rect->sprt.getPosition().y);
    if (rect->sprt.getPosition().y < 0.f)
        rect->sprt.setPosition(rect->sprt.getPosition().x, 0.f);
    if (rect->sprt.getPosition().x + rect->sprt.getGlobalBounds().width > WINDOW_WIDTH)
	    rect->sprt.setPosition(WINDOW_WIDTH - rect->sprt.getGlobalBounds().width, rect->sprt.getPosition().y);
    if (rect->sprt.getPosition().y + rect->sprt.getGlobalBounds().height > WINDOW_HEIGHT)
        rect->sprt.setPosition(rect->sprt.getPosition().x, WINDOW_HEIGHT - rect->sprt.getGlobalBounds().height);
}

void updateWindow(sf::RenderWindow &window, Player *rect) {
		window.clear();
        window.draw(rect->getSprite());
        window.display();
}

int main()
{
    auto window = sf::RenderWindow{ {WINDOW_WIDTH, WINDOW_HEIGHT}, "DinoJump" };
    window.setFramerateLimit(60);
	Player *rect = new Player("Lad");

    velocity.x = 0.f;
    velocity.y = 0.f;

    dt = deltaClock.restart();
    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }
        }
        movePlayer(dt, rect);
		updateWindow(window, rect);
        dt = deltaClock.restart();
    }
}
