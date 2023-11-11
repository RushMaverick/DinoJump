#ifndef PLAYERHPP
#define PLAYERHPP
#include <iostream>
#include <SFML/Graphics.hpp>


class Player {
	private:
		std::string _name;
		int _size;
		float _moveSpeed;
		sf::RectangleShape rect;
		sf::Texture txtr;
		sf::Image img;
		sf::Sprite sprt;
	public:
		
		Player();
		Player(std::string _name);
		Player(const Player &copy);
		Player &operator=(const Player &copy);
		~Player();
		std::string getName() const {return this->_name;};
		int getSize() const {return this->_size;};
		float getMoveSpeed() const {return this->_moveSpeed;};
		sf::RectangleShape getRectangle() const {return this->rect;};
		sf::Texture getTexture() const {return this->txtr;};
		sf::Image getImage() const {return this->img;};
		sf::Sprite getSprite() const {return this->sprt;};
 };

#endif