#include "World.h"

World::World()
{
}

//Draw Snake, Borders and Food
void World::Draw(Snake s, Food f)
{
	system("cls");
	

	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;


	for (int i = 0; i < height; i++)
	{
		for (int l = 0; l < width; l++)
		{
			if (l == 0)
				cout << "#";
			if (i == s.snakeY & l == s.snakeX)
				cout << "1";

			else if (i == f.foodX && l == f.foodX)
				cout << "0";
			else
				cout << " ";

			if (l == width - 1)
				cout << "#";
		}
		cout << endl;
	}


	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
}

void World::Collision(Snake s, Food f)
{

	if (s.snakeX == f.foodX && s.snakeY == f.foodY)
	{
		f.SpawnFood(f);
	}
}


