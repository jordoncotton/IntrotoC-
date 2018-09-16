#include <iostream>



struct Item
{
	std::string name;
	int cost;
	int quantity;
};

struct shop
{

	int gold = 38000000;
	//Item[0] = oxygen, Item[1] = magic, Item[2] = wands
	Item Item[3];

	void ChangePrice(int item, int cost)
	{
		if (item == 0)
			Item[0].cost = cost;
		if (item == 1)
			Item[1].cost = cost;
		if (item == 2)
			Item[2].cost = cost;
	}

	void SpendGold(int amount, int item)
	{
		if (item == 0)
			if (gold >= amount * Item[0].cost)
			{
				gold -= amount * Item[0].cost;
				Item[0].quantity++;
			}
		if (item == 1)
			if (gold >= amount * Item[1].cost)
			{
				gold -= amount * Item[1].cost;
				Item[1].quantity++;
			}
		if (item == 2)
			if (gold >= amount * Item[2].cost)
			{
				gold -= amount * Item[2].cost;
				Item[2].quantity++;
			}	
	}

	void SellItem(int amount, int item)
	{
		if (item == 0)
			if (Item[0].quantity >= amount)
			{
				Item[0].quantity -= amount;
				gold += amount * Item[1].cost;
			}
		if (item == 1)
			if (Item[1].quantity >= amount)
			{
				Item[1].quantity -= amount;
				gold += amount * Item[1].cost;
			}
		if (item == 2)
			if (Item[2].quantity >= amount)
			{
				Item[2].quantity -= amount;
				gold += amount * Item[2].cost;
			}
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

	shop bennys;
	bennys.Item[0] = Oxygen;
	bennys.Item[1] = Magic;
	bennys.Item[2] = wands;
	bennys.SellItem(9, 0);
}