#include <iostream>

using namespace std;

int main()
{

	/*
	Scrivere un programma che presi in input n valori interi, 
	calcoli la somma dei numeri positivi e la somma dei valori 
	assoluti dei numeri negativi.
	*/
	
	int n, numero;
	int cont = 1;
	int somma_positivi = 0;
	int somma_v_assoluti = 0;
	
	do
	{
		cout << "Inserisci il valore di n: ";
		cin >> n;
	}while(n <= 0);
	
	while(cont <= n)
	{
		cout << "Inserire un numero: ";
		cin >> numero;
		if(numero > 0)
		{
			somma_positivi = somma_positivi + numero;
		}
		else
		{
			somma_v_assoluti = somma_v_assoluti + (numero * (0 - 1));
		}
		cont++;
	}
	
	cout << "Somma valori positivi -> " << somma_positivi << " e somma valori assoluti dei valori negativi -> " << somma_v_assoluti << endl;
	
	system("pause");
	return 0;
}
