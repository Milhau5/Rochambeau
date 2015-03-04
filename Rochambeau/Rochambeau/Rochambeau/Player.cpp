#include "Player.h"
#include <iostream>
#include <vector>

using namespace std;


Player::Player()
{


}


Player::Player(string pname, Throw ptype){

	name = pname;
	type = ptype;

}

string Player::getName(){

	return name;
}

Throw Player::getType(){

	return type;
}



Player::~Player()
{
	cout << "Goodbye " << name << endl;
}
