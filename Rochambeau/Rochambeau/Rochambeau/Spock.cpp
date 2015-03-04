#include "Spock.h"
#include "Player.h"
#include <iostream>

using namespace std;


Spock::Spock()
{
}


Spock::Spock(string pname, Throw ptype) : Player(pname, ptype)
{
	//set the type of throw and then return it 
	name = pname;
	type = ptype;

}


Spock::~Spock(void)
{
	cout << name << "'s Spock is too emotional!" << endl;
}

void Spock::print(){

	cout << name << "throws \\\\// (Spock)" << endl;

}

bool Spock::operator>(Player& p)
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

bool Spock::operator<(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::paper || p.getType() == Throw::lizard)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Spock::operator==(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::spock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

