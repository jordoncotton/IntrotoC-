 #include "Game.h"
/*Main will check and test and allow me to print everything in cpp so everthing will
come out the way I want it too and able to fix whatever problem 
I have.*/
int main()
{
	srand(time(NULL));
	
	Stack Marvels;
	Stack DCUniverse;

	Hero* hc1 = new Hero();
	Hero* hb2 = new Hero();

	hc1->GetName("IronMan"); 
	Marvels.push(hc1);
	DCUniverse.push(hb2);

	Marvels.top().HeroInfo();
	DCUniverse.top().HeroInfo();

	hc1->HeroInfo();
	hb2->HeroInfo();

	

	system("pause");
}