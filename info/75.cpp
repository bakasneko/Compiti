#include <iostream>

using namespace std;

int main()
{

	/*
	Scrivere un algoritmo che, presi in input N 
	valori interi (N > 0), calcoli quanti valori 
	sono multipli di un numero scelto dall'utente.
	*/
	
	int n, numero, ciao;
	int cont = 1;
	int cont_mult = 0;
	
	do
	{
		cout << "Inserisci il valore di n: ";
		cin >> n;
	}while(n <= 0);
	
	cout << "Inserire il numero di esempio: ";
	cin >> ciao;
	
	while(cont <= n)
	{
		cout << "Inserire un numero: ";
		cin >> numero;
		if(numero % ciao == 0)
		{
			cont_mult++;
		}
		cont++;
	}
	cout << "Sono stati inseriti " << cont_mult << " multipli di " << ciao << "." << endl;
	
	
	system("pause");
	return 0;
}

