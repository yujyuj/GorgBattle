#include "boov.h"

Boov::Boov(string  NAME, int HEALTH, int SHIELD):Competitor(NAME, HEALTH, SHIELD){
}

void Boov::GetsAttacked(){

	// 1% of the time, the Boov is instantly defeated 
	int roll = rand() % 100; // 0 - 99
	if(roll == 0){
		health = 0;
	}

	// 20% of the time, 0 damaage 
	// no code

	// 50% of the time, the attack does 2 - 5 random shield damage
	else if(roll <= 50){
		int damage = rand() % 4 + 2; // 2 - 5
		shield -= damage;
		if(shield < 0){
			health += shield;
			shield = 0; //next time when attack hits shield, it damages the health
		}
	}
	
	// 29% of the time, the attack does 4 - 8 random health damage
	else if(roll <= 79){  //since 50% is already ruled out
		int damage = rand() % 5 + 4; // 4 - 8
		health -= damage;
	}
	

}
