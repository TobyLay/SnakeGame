#pragma once

#include <iostream>
#include <conio.h>
using namespace std;


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

//World Params
const int width = 20;
const int height = 10;
enum eFacing { SPAWN = 0, LEFT, RIGHT, UP, DOWN };
eFacing dir;

class Snake {
public:
	int snakeX;
	int snakeY;
	int snakeSize;
	bool dead;

	Snake();
	
	void movement(Snake);
	void input(Snake);

};