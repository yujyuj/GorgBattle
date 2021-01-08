#include "gorg.h"

Gorg::Gorg():Competitor("George", 30, 5),max_shield(5){}

void Gorg::GetsAttacked(){
	
	int roll = rand() % 100; // 0 - 99
	//15% of the time, add 1 
	if(roll < 15){
		if(shield < max_shield){
			shield++;
		}
	}
	
	// 65% of the time, attack 1 - 2 random damage to shield
	if(roll < 65){
		int damage = rand() % 2 + 1; // 1 - 2
		shield -= damage;
		if(shield < 0){
			damage = rand() % 6 + 5; // 5 - 10
			health -= damage;
		}
	}

}
