#pragma once
#include <string>
#include "Player.h"
class Paper :
	public Player
{
public:
	Paper();
	Paper(string name, Throw type);
	void print();
	bool operator>(Player& r);
	bool operator<(Player& p); //this is the RIGHT way
	bool operator==(Player& e);
	~Paper(void);
};

