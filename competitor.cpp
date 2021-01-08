#include "competitor.h"

Competitor::Competitor(string NAME, int HEALTH, int SHIELD):name(NAME), health(HEALTH), shield(SHIELD){
}

Competitor::~Competitor(){}

string Competitor::GetName() const{
	return name;
}

void Competitor::SetName(string value){
	name = value;
}

int Competitor::GetHealth() const{
	return health;
}

void Competitor::SetHealth(int value){
	health = value;
}

int Competitor::GetShield() const{
	return shield;
}

void Competitor::SetShield(int value){
	shield = value;
}

bool Competitor::IsDefeated() const{
	return health <= 0;
}
