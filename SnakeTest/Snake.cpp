#include "Snake.h"
#include "World.h"

enum eFacing { SPAWN = 0, LEFT, RIGHT, UP, DOWN };
eFacing dir;

//Constructor for Snake
Snake::Snake() {
	
	dead = false;
}


//Player Input Detection
void Snake::input(Snake)
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case KEY_UP:
			dir = UP;
			break;
		case KEY_DOWN:
			dir = DOWN;
			break;
		case KEY_LEFT:
			dir = LEFT;
			break;
		case KEY_RIGHT:
			dir = RIGHT;
			break;
		}
	}
}

//Movement Based on Input
void Snake::movement(Snake)
{
	switch (dir)
	{
	case DOWN:
		snakeY++;
		break;
	case LEFT:
		snakeX--;
		break;
	case RIGHT:
		snakeX++;
		break;
	case UP:
		snakeY--;
		break;
	default:
		break;
	}



}
