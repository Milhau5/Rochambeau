#include "Paper.h"
#include "Player.h"
#include <iostream>

using namespace std;


Paper::Paper()
{
}


Paper::Paper(string pname, Throw ptype) : Player(pname, ptype)
{
	//set the type of throw and then return it 
	name = pname;
	type = ptype;

}


Paper::~Paper(void)
{
	cout << name << "'s paper is crumpled!" << endl;
}

void Paper::print(){

	cout << name << " throws --- (Paper)" << endl;

}

bool Paper::operator>(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::spock || p.getType() == Throw::rock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Paper::operator<(Player& p)
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

bool Paper::operator==(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::paper)
	{
		return true;
	}
	else
	{
		return false;
	}
}
