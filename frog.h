#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;


class frog{
private:
	float xpos;
	float ypos;
	int lives;
	float xVel;
	float yVel;

public:
	frog();//constructor
	void draw(sf::RenderWindow& window); //& returns the address of the pointer
	void jump(bool *keys);
	float returnX() { return xpos; } //
	float returnY() { return ypos; }
	void ded();
	int returnLives() { return lives; }
	void printInfo() { cout << "I am kermit and my position is " << xpos << "," << ypos << endl; } //for testing purposes






};

