#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che, presi in input N e 
	N valori interi, con N>0, dica quanti valori 
	pari siano stati inseriti e quanti valori 
	negativi siano stati inseriti.
	*/
	
	int n, numero;
	int cont_pari = 0;
	int cont_neg = 0;
	
	do
	{
		cout << "Inserire il valore di n: ";
		cin >> n;
	}while(n <= 0);

	for(int i = 0; i < n; i++)
	{
		cout << "Inserire un numero: ";
		cin >> numero;
		if(numero % 2 == 0)
		{
			cont_pari++;
		}
		if(numero < 0)
		{
			cont_neg++;
		}
	}
	
	cout << "Numeri pari inseriti -> " << cont_pari << "." << endl;
	cout << "Numeri negativi inseriti -> " << cont_neg << "." << endl;
	
	system("pause");
	return 0;
}

