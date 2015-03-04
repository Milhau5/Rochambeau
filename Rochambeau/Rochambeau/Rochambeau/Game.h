#pragma once
#include <vector>
#include "Player.h"
class Game
{
public:
	Game();
	void assemble();
	void runGame();
	int runRound();
	~Game(void);
protected:
	vector <Player*> players;
};

