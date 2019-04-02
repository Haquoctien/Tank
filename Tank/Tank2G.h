#pragma once
#include "Tank1G.h"
class Tank2G :
	public Tank1G
{
protected:
	int coi[2];
public:
	Tank2G();
	~Tank2G();
	virtual void output();
};