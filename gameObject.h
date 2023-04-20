#pragma once
#include "frog.h"
#include "globals.h"
#include<SFML/Graphics.hpp>
#include<Windows.h>

class car {
public:
	car(int x, int y, int d) {

		xpos = x;
		ypos = y;
		direction = d;

	}
	void draw(sf::RenderWindow& window);
	void move();
	bool collide(int x, int y);
	void printInfo() { cout << "I am a car and my position " << xpos << "," << ypos << endl; }
};
