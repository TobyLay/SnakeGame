#include "Food.h"

Food::Food()
{
	//eaten = true;
}

void Food::SpawnFood(Food)
{
	foodY = rand() % worldHeight;
	foodX = rand() % worldWidth;
		
}
