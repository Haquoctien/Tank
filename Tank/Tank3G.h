#pragma once
#include "Tank1G.h"
class Tank3G :
	public Tank1G
{
protected:
	float sungMay2[2];
public:
	Tank3G();
	~Tank3G();
	void output();
};

