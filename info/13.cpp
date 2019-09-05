#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo che, letto in input un 
	numero intero, dica se è pari o dispari.
	*/
	
	int numero;
	
	cout << "Inserire un numero: ";
	cin >> numero;
	
	if(numero % 2 == 0)
	{
		cout << "Il numero inserito e' pari.\n";
	}
	else
	{
		cout << "Il numero inserito e' dispari\n";
	}
	
	system("pause");
	return 0;
}

