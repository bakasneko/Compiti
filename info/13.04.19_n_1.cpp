#include <iostream>

using namespace std;

/*
Scrivere un programma che letta la misura del lato di un quadrato 
calcoli attraverso le funzioni CalcoloArea e CalcoloPerimetro, che 
ricevono il lato come parametro in ingresso e restituiscono i valori 
calcolati, l’area e il perimetro del quadrato e li visualizzi.
*/

int Area(int lato)
{
	return (lato * lato);
}

int Perimetro(int lato)
{
	return (lato * 4);
}

int main()
{
	int l;
	int p = 0;
	int a = 0;
	
	do
	{
		cout << "Inserire la misura del lato del quadrato: ";
		cin >>  l;
	}while(l <= 0);
	
	p = Perimetro(l);
	a = Area(l);
	
	cout << "Il perimetro del quadrato e' " << p << ".\n";
	cout << "L'area del quadrato e' " << a << ".\n";
	
	system("pause");
	return 0;
}

