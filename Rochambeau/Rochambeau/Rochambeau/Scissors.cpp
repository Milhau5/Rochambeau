#include "Scissors.h"
#include "Player.h"
#include <iostream>

using namespace std;


Scissors::Scissors()
{
}


Scissors::Scissors(string pname, Throw ptype) : Player(pname, ptype)
{
	//set the type of throw and then return it 
	name = pname;
	type = ptype;

}


Scissors::~Scissors(void)
{
	cout << name << "'s scissors are too rusty!" << endl;
}

void Scissors::print(){

	cout << name << "throws  8>< (Scissors)" << endl;

}

bool Scissors::operator>(Player& p)
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

bool Scissors::operator<(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::rock || p.getType() == Throw::spock)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Scissors::operator==(Player& p)
{ //get the type of Throw to compare it to
	if (p.getType() == Throw::scissors)
	{
		return true;
	}
	else
	{
		return false;
	}
}
