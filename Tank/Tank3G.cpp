#include "Tank3G.h"



Tank3G::Tank3G()
{
	giap[0] = 500;
	phao[0] = 100;
	sungMay[0] = 6.72;
	sungMay2[0] = 12.7; sungMay2[1] = 1;
}


Tank3G::~Tank3G()
{
}

void Tank3G::output()
{
	cout << "Tank3G:" << endl;
	cout << "Giap: " << giap[0] << "mm (" << giap[1] << "), phao: "\
		<< phao[0] << " li (" << phao[1] << "), sung may: " << sungMay[0] \
		<< " li (" << sungMay[1] << "),  sung may: " << sungMay2[0] << " mm (" << sungMay2[1] << ")" << endl;
}
