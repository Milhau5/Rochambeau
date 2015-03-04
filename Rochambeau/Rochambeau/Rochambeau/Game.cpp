#include "Game.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Lizard.h"
#include "Spock.h"

int input;
string name;

Game::Game()
{
}

void Game::assemble()
{
	srand(time(NULL));

	cout << "Welcome to Rock, Paper, Scissors, Lizard, Spock." << endl;
	cout << "(You would understand this joke if you watch Big Bang Theory)" << endl;
	cout << "(It isn't terribly funny anyway...)" << endl;
	cout << "Enter how many players (2-10) will be playing: " << endl;
	cin >> input;
	cin.ignore();

	if (input < 2 || input > 10)
	{
		cout << "Invalid number of players. Try again: " << endl;
		cin >> input;
		cin.ignore();
	}
	else if (input >= 2 || input <= 10){
		for (int i = 0; i < input; i++)
		{

			cout << "Enter Player names." << endl;
			getline(cin, name);


			//randomly making players
			int RNG = rand() % 5;
			if (RNG == 0)
			{
				//rock
				players.push_back(new Rock(name, Throw::rock));
			}
			else if (RNG == 1)
			{
				//paper
				players.push_back(new Paper(name, Throw::paper));
			}
			else if (RNG == 2)
			{
				//scissors
				players.push_back(new Scissors(name, Throw::scissors));
			}
			else if (RNG == 3)
			{
				//lizard
				players.push_back(new Lizard(name, Throw::lizard));
			}
			else if (RNG == 4)
			{
				//spock
				players.push_back(new Spock(name, Throw::spock));
			}

		}
	}
	
}

void Game::runGame()
{
	int round;
	string choice;

	//go until we win, tie, or quit
	while (true){ 

		round = runRound();
		if (round == 1)
		{
			cout << "Do you want to play again (y/n)?" << endl;
			cout << "Please only pick 'yes' or 'no' or this game will crash horribly." << endl;
			cin >> choice;
			cin.ignore();
			if (choice == "n")
			{
				cout << "Game Over" << endl;
				exit(0);
			}
			else if (choice == "y"){
				runRound();
			}
			
		}
		else if (round == 0)
		{
			cout << name << " wins!" << endl;
		}
		else if (round == -1)
		{
			cout << "We have a game-ending tie!" << endl;
		}
	}

	/*cout << name << " wins!" << endl;
	system("PAUSE");*/
	
}

int Game::runRound()
{
	/*if (input < 2)
	{
		cout << "There are not enough players." << endl;
		return 0;
	}*/
	

		//Pick two to fight
		//for now it is random, later we will ask the user to pick
		int p1;
		int p2;

		/*p1 = rand() % input;
		p2 = rand() % input;
		while (p1 == p2)
		{
			p2 = rand() % input;
		}*/

		
			cout << "Which two players should battle this round (type 0 for first name, 1 for second, etc.)?" << endl;
			cout << "(Players that previously lost may not go again)" << endl;
			cin >> p1;
			cin.ignore();
			cin >> p2;
			cin.ignore();

			players[p1]->print();
			players[p2]->print();
			//system("PAUSE");

			//battle the two players
			//if there is a loser, delete and remove that player from the vector
			//if the match is successful, return 1
			//tie
			if (players[p1] == players[p2])
			{
				return -1;
			}
			else if (*players[p1] > *players[p2]) //if p1 throw trumps opponent than opponent
			{
				//call loser's destructor
				players.at(p2)->~Player();

				//delete loser from vector
				delete players.at(p1);
				//players.erase(players.begin() + p2);

				//return 1
				return 1;
			}
			else if (*players[p1] < *players[p2]) //if p1 is trumped by opponent
			{
				players.at(p1)->~Player();
				delete players.at(p1);
				//players.erase(players.begin() + p1);
				return 1;
			}
			
	
}


Game::~Game(void)
{
	cout << "End of game." << endl;
}
