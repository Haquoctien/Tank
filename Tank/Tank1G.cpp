#include "Tank1G.h"


Tank1G::Tank1G()
{
	giap[0] = 300; giap[1] = 1;
	phao[0] = 85; phao[1] = 1;
	sungMay[0] = 7.62; sungMay[1] = 1;
}


Tank1G::~Tank1G()
{
}

void Tank1G::output()
{
	cout << "Tank1G:" << endl;
	cout << "Giap: " << giap[0] << "mm (" << giap[1]<< "), phao: "\
		<< phao[0] << " li (" << phao[1] << "), sung may: " << sungMay[0] \
		<< " li (" << sungMay[1] << ") " << endl;
}
