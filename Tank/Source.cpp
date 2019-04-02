#include "Tank1G.h"
#include "Tank2G.h"
#include "Tank3G.h"

int main()
{
	Tank1G **tanks;
	int n;
	cout << "Nhap so xe tang muon nhap: " << endl;
	cin >> n;
	tanks = new Tank1G*[n];
	cin.ignore();
	int choice;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap 1 de nhap xe tang 1G, 2 de nhap xe tang 2G, 3 de nhap xe tang 3G: ";
		cin >> choice;
		if (choice == 1)
			tanks[i] = new Tank1G;
		else if (choice == 2)
			tanks[i] = new Tank2G;
		else
			tanks[i] = new Tank3G;
	}

	cout << "Cac xe tang da nhap: " << endl;
	for (int i = 0; i < n; i++)
		tanks[i]->output();


	system("pause");
	return 0;


}