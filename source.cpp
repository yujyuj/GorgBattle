/*
YJL
Jan/08/2021

This program stimulates Gorg battle for 1,000.000 times and calculates the odds of victory respetively for Gorg and Boov.
Player is prompted to enter health and shield value for Boov. Generally the higher the values are, the bigger Boov's odd of victory is.
*/

#include <iostream>
#include <ctime>
#include "boov.h"
#include "gorg.h"
#include "competitor.h"

using namespace std;

int main(){
	system("clear");

	cout << endl
	     << "--------------------------------------------------------------------" << endl
	     << " Boov and Gorg are competiting in Gorg battle. This game stimulates " << endl
             << " a Gorg battle for 1,000,000 times to see what their odds of victory" << endl
             << " would be. "                                                          << endl
             << " Player is prompted to enter health value and shield value for Boov " << endl
             << " to figure out how strong Boov needs to be to survive the battle.   " << endl
	     << "--------------------------------------------------------------------" << endl;


	srand(static_cast<unsigned>(time(0)));

	cout << "Enter Boov health value: ";
	int health;
	cin >> health;
	cout << "Enter Boov shield value: ";
	int shield;
	cin >> shield;

	const int NUMBER_OF_SIMULATIONS = 1000000;
	int boovWins = 0;
	int gorgWins = 0;

	for(int i = 0; i < NUMBER_OF_SIMULATIONS; i++){

		// create 2 competitors Boov and Gorg
		Competitor * oh = new Boov("oh", health, shield);
		Competitor * george = new Gorg;
	
		//both alive, attack george first, if george still alive, attacks boov
		while( !(oh->IsDefeated()) && !(george->IsDefeated()) ){

			george->GetsAttacked();
			if( !george->IsDefeated()){
				oh->GetsAttacked();
			}	
		}

		if(george->IsDefeated())
			++boovWins;
		else 
			++gorgWins;

		delete oh;
		delete george;
	}

	//calculate the winning percentage of each competitor
	double boov_percentage = boovWins /static_cast<double> (NUMBER_OF_SIMULATIONS) * 100;
	double gorg_percentage = gorgWins /static_cast<double> (NUMBER_OF_SIMULATIONS) * 100;

	cout << "Boov won: " << boov_percentage << "%" << endl;
	cout << "Gorg won: " << gorg_percentage << "%" << endl;

	return 0;
}
