#ifndef GAMEHPP
#define GAMEHPP
#include <iostream>
#include <SFML/Graphics.hpp>



class Game {
	private:
	public:
		
		Game();
		Game(std::string _name);
		Game(const Game &copy);
		~Game();
		Game &operator=(const Game &copy);
};

#endif