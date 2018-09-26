 #include "Game.h"

int main()
{
	srand(time(NULL));
	
	Stack Marvels;
	Stack DCUniverse;

	Hero* hc1 = new Hero();
	Hero* hb2 = new Hero();

	Marvels.push(hc1);
	DCUniverse.push(hb2);
	
	Marvels.top().PrintInfo();
	DCUniverse.top().PrintInfo();

	hc1->PrintInfo();
	hb2->PrintInfo();

	system("pause");
}