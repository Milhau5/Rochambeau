#pragma once
#include <string>
#include "Player.h"
class Scissors :
	public Player
{
public:
	Scissors();
	Scissors(string name, Throw type);
	void print();
	bool operator>(Player& r);
	bool operator<(Player& p); //this is the RIGHT way
	bool operator==(Player& e);
	//enum class Throw : char { rock = 'r', paper = 'p', scissors = 's', lizard = 'l', spock = 'sp' };
	~Scissors(void);
};

