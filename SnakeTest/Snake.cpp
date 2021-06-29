#include "Snake.h"

//Constructor for Snake
Snake::Snake() {
	snakeX = width / 2;
	snakeY = height / 2;
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
	case LEFT:
		snakeX--;
		break;

	case RIGHT:
		snakeX++;
		break;

	case UP:
		snakeY--;
		break;

	case DOWN:
		snakeY++;
		break;

	default:
		break;
	}

}
