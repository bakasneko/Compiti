#include <iostream>

using namespace std;

/*
Scrivere un programma che risolva il problema di trovare la soluzione di un'equazione di
primo grado. Dati, in ingresso, da tastiera, i valori a e b calcolare e visualizzare la soluzione
dell'equazione: ax = b; nel caso in cui questa esista, altrimenti dà un messaggio di "equazione impossibile" o
"equazione indeterminata".
*/

int main()
{
	int a;
	int b;
	
	cout << "Inserire due numeri: " << endl;
	cout << "A: ";
	cin >> a;
	cout << endl << "B: ";
	cin >> b;
	
	if(a == 0 && b != 0)
	{
		cout << endl << "Equazione Impossibile." << endl << endl ;
	}
	else if(a == 0 && b == 0)
	{
		cout << endl << "Equazione indeterminata. " << endl << endl ;
	}
	else
	{	
		cout << endl << "x = " << b/a << endl << endl ;
	}
	
	system("pause");
	return 0;
}


