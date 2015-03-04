#pragma once
#include <string>
#include "Throwit.h"

using namespace std;

class Player
{
public:
	Player();
	Player(string pname, Throw ptype);
	virtual bool operator <(Player& other) = 0;
	virtual bool operator >(Player& other) = 0;
	virtual bool operator ==(Player& other) = 0;
	string getName();
	Throw getType();
	virtual ~Player(void);
	virtual void print() = 0; //a pure virtual (abstract) method
protected:
	string name;
	Throw type;
	
};

