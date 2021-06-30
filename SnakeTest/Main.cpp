#include "World.h"



//Runs when game starts

int main()
{
	World w;
	Snake s;
	Food f;
	
	s.snakeX = w.width / 2;
	s.snakeY = w.height / 2;
	f.worldHeight = w.height;
	f.worldWidth = w.width;
	f.SpawnFood(f);
	
	
	while (!s.dead)
	{
		w.Collision(s, f);
		w.Draw(s, f);
		s.input(s);
		s.movement(s);
	}
	return 0;
}