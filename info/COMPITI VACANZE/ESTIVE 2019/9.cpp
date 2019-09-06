#include <iostream>

using namespace std;

/*
Scrivere un programma che risolva il problema di calcolare la media di N numeri naturali
inseriti da tastiera, con N>=0 anch’esso inserito da tastiera.

*/

int main()
{
	int n;
	int somma = 0;
	int numero;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >> n;
	}while(n < 0);
	
	for(int i = 0; i < n; i++)
	{
		cout << "Inserire un valore numerico: ";
		cin >> numero;
		somma += numero;
	}
	
	int media = somma/n;
	
	cout << "La media e' " << media <<  ". \n";
	
	system("pause");
	return 0;
}

