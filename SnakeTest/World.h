#pragma once
#include <iostream>
#include <conio.h>
#include "Snake.h"
#include "Food.h"
using namespace std;


class World {
public:
	int width = 20;
	int height = 20;
	int score = 0;
	World();

	void Draw(Snake, Food);
	void Collision(Snake, Food);
};