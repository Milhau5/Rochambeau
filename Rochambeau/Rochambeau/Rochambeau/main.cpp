#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <time.h>

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Lizard.h"
#include "Spock.h"
#include "Game.h"

using namespace std;

int main(){
	
	Game playMe;
	playMe.assemble();
	playMe.runGame();

	} 

