#include <iostream>

using namespace std;

/*
Scrivere un programma che consenta di inserire da tastiera un intero a. Calcolarne e visualizzarne il
suo valore assoluto (o modulo) attraverso l'utilizzo di una funzione di nome modulo che calcoli e
restituisca come valore di ritorno il modulo di un intero che sarà richiamato opportunamente nel
main
*/

int Modulo(int num)
{
	if(num >= 0)
	{
		return num;
	}
	else
	{
		return -num;
	}
}

int main()
{
	int a;
	
	cout << "Inserire un numero: ";
	cin >> a;
	
	int valAss = Modulo(a);
	
	cout << "Valore assoluto: " << valAss << endl; 
	
	system("pause");
	return 0;
}

