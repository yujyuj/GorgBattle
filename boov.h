#pragma once
#include <iostream>
#include "competitor.h"

using namespace std;

class Boov : public Competitor{

public:
	Boov(string , int, int);
	virtual void GetsAttacked();
};
