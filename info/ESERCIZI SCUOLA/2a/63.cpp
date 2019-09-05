#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, presi in input 
	15 numeri interi, dica quanti valori pari 
	sono stati inseriti.
	*/
	
	int num;
	int cont = 1;
	int cont_pari = 0;
	
	while(cont <= 15)
	{
		cout << "Inserire un numero: ";
		cin >> num;
		cont++;
		if(num % 2 == 0)
		{
			cont_pari++;
		}
	}
	
	if(cont_pari == 0)
	{
		cout << "Non e' stato inserito alcun numero pari" << endl;
	}
	else
	{
		cout << "Sono stati inseriti " << cont_pari << " numeri pari." << endl;
	}
	
	system("pause");
	return 0;
}

