#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo che, presi in input 3 numeri, visualizzi il valore minore
	*/
	
	int a, b, c, minore;
	
	cout << "Inserire il primo numero: ";
	cin >> a;
	cout << "Inserire il secondo numero: ";
	cin >> b;
	cout << "Inserire il terzo numero: ";
	cin >> c;
	
	minore = a;
	
	if(b < minore)
	{
		minore = b;
	}
	if(c < minore)
	{
		minore = c;
	}
	
	cout << "Il valore minore e' " << minore << endl;
	
	system("pause");
	return 0;
}

