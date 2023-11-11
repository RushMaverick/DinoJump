#include "Player.hpp"

Player::Player() {
	this->_name = "Rect";
	this->_moveSpeed = 300.f;
	this->_size = 100;
	this->txtr.loadFromFile("/Users/rrask/Documents/Coding/sfml/DinoJump/textures/gulls.png");
	this->sprt.setTexture(this->txtr);
	this->sprt.setScale(5, 5);
	this->sprt.setTextureRect(sf::IntRect(0, 0, 16, 16));
}

Player::Player(std::string name) {
	this->_name = name;
	this->_moveSpeed = 300.f;
	this->_size = 100;
	this->txtr.loadFromFile("/Users/rrask/Documents/Coding/sfml/DinoJump/textures/gulls.png");
	this->sprt.setTexture(this->txtr);
	this->sprt.setScale(5, 5);
	this->sprt.setTextureRect(sf::IntRect(0, 0, 16, 16));

}

Player &Player::operator=(const Player &copy) {
	if (this == &copy)
		return *this;
	this->_name = copy.getName();
	this->_moveSpeed = copy.getMoveSpeed();
	this->_size = copy.getSize();
	this->txtr = copy.getTexture();
	this->sprt = copy.getSprite();
	return *this;
}

Player::Player(const Player &copy) {
	this->_name = copy.getName();
	this->_moveSpeed = copy.getMoveSpeed();
	this->_size = copy.getSize();
	this->txtr = copy.getTexture();
	this->sprt = copy.getSprite();
}

Player::~Player() {

}