#include "frog.h"
#include "globals.h"
#include<SFML/Graphics.hpp>
#include<Windows.h>
using namespace std;

int main() {

	srand(time(NULL));
	bool keys[] = {false,false, false, false };
	int timer = 0;
	frog player;//instatiate a frog
	sf::RenderWindow screen(sf::VideoMode(1000, 1000), "Frogger!");

	while (screen.isOpen()) {
		//input section------------------------------------------------------
		sf::Event event;
		while (screen.pollEvent(event)) { //look for user input
			if (event.type == sf::Event::Closed)
				screen.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				keys[UP] = true;
			}
			else keys[UP] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				keys[DOWN] = true;
			}
			else keys[DOWN] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				keys[RIGHT] = true;
			}
			else keys[RIGHT] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				keys[LEFT] = true;
			}
			else keys[LEFT] = false;

		}
			
		//physics section-----------------------------------------------------
		timer++;
		if (timer > 200) {
			player.jump(keys);
			timer = 0;
		}
		//render section------------------------------------------------------
		screen.clear();

		player.draw(screen);




		screen.display();

	}//end game loop----------------------------------------------------------
	cout << "Game over " << endl;
	return 0;
}
