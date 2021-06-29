#include "Snake.h"


//Food Parameters
int foodX, foodY;

//Runs when game starts
void Setup()
{
	foodX = rand() % width;
	foodY = rand() % height;
}

//Draw Snake, Borders and Food
void Draw(Snake& s)
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

			else if (i == foodX && l == foodX)
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



int main()
{
	Snake s;
	Setup();
	while (!s.dead)
	{
		Draw(s);
		s.input(s);
		s.movement(s);
	}
	return 0;
}