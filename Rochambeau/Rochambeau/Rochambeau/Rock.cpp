#include "Rock.h"
#include "Player.h"
#include <iostream>

using namespace std;


Rock::Rock()
{
}


Rock::Rock(string pname, Throw ptype) : Player(pname, ptype)
{
	//set the type of throw and then return it 
	name = pname;
	type = ptype;

}


Rock::~Rock(void)
{
	cout << name << "'s rock is too heavy!" << endl;
}

void Rock::print(){

	cout << name << "throws O (Rock)" << endl;

}

bool Rock::operator>(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::scissors || p.getType() == Throw::lizard)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rock::operator<(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::paper || p.getType() == Throw::spock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Rock::operator==(Player& p)
{ //get the type of Throw to compare it to
		if (p.getType() == Throw::rock)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

