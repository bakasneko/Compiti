#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, presi in input 
	N valori (N>0 scelto dall'utente), calcoli 
	la percentuale di valori negativi inseriti.
	*/
	
	int n, percentuale, numero;
	int cont = 1;
	int cont_neg = 0;
	
	do
	{
		cout << "Inserisci un numero: ";
		cin >> n;
	}while(n <= 0);
	
	while(cont <= n)
	{
		cout << "Inserisci un numero: ";
		cin >> numero;
		if(numero < 0)
		{
			cont_neg++;
		}
		cont++;
	}
	
	percentuale = (cont_neg * 100)/n;
	
	cout << percentuale << " % " << endl;
	
	system("pause");
	return 0;
}

