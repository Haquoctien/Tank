#pragma once
#include <iostream>
using namespace std;
class Tank1G
{
protected:
	int giap[2];
	int phao[2];
	float sungMay[2];
public:
	Tank1G();
	virtual ~Tank1G();
	virtual void output();
};

