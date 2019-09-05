#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, dato un numero intero in input, 
	visualizza il suo doppio se è pari, il triplo se è dispari.
	*/
	
	int numero, doppio, triplo;
	
	cout << "Inserire un numero: ";
	cin >> numero;
	
	doppio = numero *2;
	triplo = numero * 3;
	
	if(numero % 2 == 0)
	{
		cout << "Il numero e' pari e il suo doppio e' " << doppio << ".\n";
	}
	else
	{
		cout << "Il numero e' dispari e il suo triplo e' " << triplo << ".\n";
	}
	
	system("pause");
	return 0;
}

