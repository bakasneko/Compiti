#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma per acquisire 8 numeri dall’utente, 
	caricarli nel vettore Vett e visualizzarli uno per riga.
	*/
	
	int vett[8];
	
	for(int i = 0; i < 8; i++)
	{
		cout << "Inserire numero " << i + 1 << ": ";
		cin >> vett[i];
	}
	
	for(int i = 0; i < 8; i++)
	{
		cout << vett[i] << endl;
	}
	
	system("pause");
	return 0;
}

