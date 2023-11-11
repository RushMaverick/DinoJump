#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"
const int WINDOW_HEIGHT = 800;
const int WINDOW_WIDTH = 600;
const int RECTANGLE_SIZE = 100;
sf::RectangleShape rect;
sf::Vector2f velocity(WINDOW_HEIGHT / 2, WINDOW_WIDTH / 2);
float moveSpeed = 300.f;
sf::Clock deltaClock;
sf::Time dt;


void movePlayer(sf::Time dt) {
    velocity.x = 0.f;
    velocity.y = 0.f;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        velocity.y += -moveSpeed * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        velocity.y += moveSpeed * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        velocity.x += -moveSpeed * dt.asSeconds();
    }
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        velocity.x += moveSpeed * dt.asSeconds();
    }
    rect.move(velocity);
    if (rect.getPosition().x < 0.f)
        rect.setPosition(0.f, rect.getPosition().y);
    if (rect.getPosition().y < 0.f)
        rect.setPosition(rect.getPosition().x, 0.f);
    if (rect.getPosition().x + rect.getGlobalBounds().width > WINDOW_WIDTH)
	    rect.setPosition(WINDOW_WIDTH - rect.getGlobalBounds().width, rect.getPosition().y);
    if (rect.getPosition().y + rect.getGlobalBounds().height > WINDOW_HEIGHT)
        rect.setPosition(rect.getPosition().x, WINDOW_HEIGHT - rect.getGlobalBounds().height);
}

int main()
{
    auto window = sf::RenderWindow{ { WINDOW_WIDTH, WINDOW_HEIGHT }, "DinoJump" };
    window.setFramerateLimit(60);
    velocity.x = 0.f;
    velocity.y = 0.f;
    rect.setSize(sf::Vector2f(RECTANGLE_SIZE, RECTANGLE_SIZE));

    dt = deltaClock.restart();
    while (window.isOpen())
    {
        std::cout << "deltaTime is: " << dt.asSeconds() << std::endl;
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        movePlayer(dt);
        window.clear();
        window.draw(rect);
        window.display();
        dt = deltaClock.restart();
    }
}