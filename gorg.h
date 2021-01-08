#pragma once
#include "competitor.h"

class Gorg : public Competitor{
	int max_shield;
public:
	Gorg();
	virtual void GetsAttacked();
};
