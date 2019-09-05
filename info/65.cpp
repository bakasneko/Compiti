#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, preso in input 
	il valore N>0, calcoli la somma dei primi 
	N numeri positivi pari.
	*/
	
	int n;
	int cont = 0;
	int somma = 0;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >> n;
	}while(n <= 0);
	
	while(cont < n*2)
	{
		somma = somma + cont;
		cont+= 2;
	}
	
	cout << somma << endl;
	
	system("pause");
	return 0;
}

