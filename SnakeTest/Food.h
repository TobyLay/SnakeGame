#pragma once
#include <iostream>
#include <conio.h>
#include "Snake.h"
//#include "World.h"
using namespace std;

class Food {
public:
	int foodX;
	int foodY;
	//bool eaten;
	int worldHeight;
	int worldWidth;

	Food();

	void SpawnFood(Food);

	
};

