#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che, presi in input il numero n 
	(n>0) di valori e i valore s di soglia, calcoli la media 
	aritmetica di tutti i numeri presi in input che superano 
	il valore di soglia.
	*/
	
	int n, s, numero;
	int cont_maggiori = 0;
	double somma = 0;
	double media = 0;
	
	do
	{
		cout << "Inserisci il valore di n: ";
		cin >> n;
	}while(n <= 0);
	
	cout << "Inserisci il valore di soglia: ";
	cin >> s;
	
	for(int i = 1; i <= n; i++)
	{
		cout << "Inserisci un numero: ";
		cin >> numero;
		if(numero > s)
		{
			somma+=numero;
			cont_maggiori++;
		}
	}
	
	if(cont_maggiori == 0)
	{
		cout << "Non e' stato inserito alcun valore maggiore di " << s;
	}
	else
	{
		media = somma / cont_maggiori;
		cout << "La media dei " << cont_maggiori << " numeri maggiori di " << s << " e' " << media << ".\n"; 
	}
	
	system("pause");
	return 0;
}

