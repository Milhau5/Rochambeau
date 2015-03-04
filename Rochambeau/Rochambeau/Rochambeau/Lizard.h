#pragma once
#include <string>
#include "Player.h"
class Lizard :
	public Player
{
public:
	Lizard();
	Lizard(string name, Throw type);
	void print();
	bool operator>(Player& r);
	bool operator<(Player& p); //this is the RIGHT way
	bool operator==(Player& e);
	~Lizard(void);
};

