#pragma once
#include <iostream>
#include <conio.h>
using namespace std;

//Define Arrow Key Inputs
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

extern enum dir;

class Snake {
public:
	int snakeX;
	int snakeY;
	int snakeSize;
	bool dead;
	int snakeTailX[10], snakeTailY[10];

	Snake();
	
	void movement(Snake);
	void input(Snake);

};