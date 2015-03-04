#include "Lizard.h"
#include "Player.h"
#include <iostream>

using namespace std;


Lizard::Lizard()
{
}


Lizard::Lizard(string pname, Throw ptype) : Player(pname, ptype)
{
	//set the type of throw and then return it 
	name = pname;
	type = ptype;

}


Lizard::~Lizard(void)
{
	cout << name << "'s lizard is too old!" << endl;
}

void Lizard::print(){

	cout << name << " throws ~!~!~~@ (Lizard)" << endl;

}


bool Lizard::operator>(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::spock || p.getType() == Throw::paper)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Lizard::operator<(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::scissors || p.getType() == Throw::rock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Lizard::operator==(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::lizard)
	{
		return true;
	}
	else
	{
		return false;
	}
}