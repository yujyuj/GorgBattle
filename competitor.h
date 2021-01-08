#pragma once
#include <string>

using namespace std;

class Competitor{

protected:
	string name;
	int health;
	int shield;
	
public:
	Competitor(string , int, int);
	virtual ~Competitor();
	
	string GetName() const;
	void SetName(string);

	int GetHealth() const;
	void SetHealth(int);

	int GetShield() const;
	void SetShield(int);

	bool IsDefeated() const;
	virtual void GetsAttacked() = 0;
};
