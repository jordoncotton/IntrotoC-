#include <iostream>



struct Item

{

	std::string name;

	int cost;

	int quantity;

};



struct shop

{

	int gold = 32;

	Item Item[8];



	void ChangePrice(std::string gold, int cost)

	{

		for (int i = 0; i < 8; i++)

		{

			if (Item[i] == gold)

			{

				Item[i] = cost;

			}

		}

	}



	void SpendGold(std::string Babyoil, int cost)

	{



	}



	void SellItem(std::string customer, int cost)

	{



	}



};

void main()

{

	Item Oxygen;

	Oxygen.name = "Oxygen";

	Oxygen.cost = 50;

	Oxygen.quantity = 9;



	Item Magic;

	Magic.name = "Magic";

	Magic.cost = 70;

	Magic.quantity = 8;



	Item wands;

	wands.name = "wands";

	wands.cost = 100;

	wands.quantity = 4;

}