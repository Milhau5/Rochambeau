#pragma once
#include "Player.h"
#include <string>
class Rock :
	public Player
{
public:
	Rock();
	Rock(string name, Throw type);
	void print();
	bool operator>(Player& r);
	bool operator<(Player& p); //this is the RIGHT way
	bool operator==(Player& e);
	~Rock(void);
};

