#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo che, dati due numeri interi x e y, 
	calcoli il risultato e il resto della divisione intera tra x e y
	*/
	
	int x, y, quoziente, resto;
	
	cout << "Inserire il valore di x: ";
	cin >> x;
	
	cout << "Inserire il valore di y: ";
	cin >> y;
	
	quoziente = x / y;
	resto = x % y;
	
	cout << "Il risultato della divisione di " << x << " per " << y << " e' " << quoziente << ".\n";
	
	if(resto == 0)
	{
		cout << "La divisione non ha resto: y e' multiplo di x" << endl;
	}
	else
	{
		cout << "Il resto della divisione di " << x << " per " << y << " e' " << resto << ":\n";
	}
	
	system("pause");
	return 0;
}

