#include "Tank2G.h"



Tank2G::Tank2G()
{
	giap[0] = 400;
	phao[0] = 85;
	sungMay[0] = 7.62;
	coi[0] = 82; coi[1] = 1;
}


Tank2G::~Tank2G()
{
}

void Tank2G::output()
{
	cout << "Tank2G" << endl;
	cout << "Giap: " << giap[0] << "mm (" << giap[1] << "), phao: "\
		<< phao[0] << " li (" << phao[1] << "), sung may: " << sungMay[0] \
		<< " li (" << sungMay[1] << "), coi: " << coi[0] << " (" << coi[1] <<")" << endl;
}
