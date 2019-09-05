#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, dato il prezzo di un prodotto, 
	applichi uno sconto del 12% se il prezzo
	è inferiore a € 30,00, del 25% altrimenti.
	*/
	
	double prezzo, sconto, prezzo_finale;
	
	cout << "Inserire il prezzo da scontare: ";
	cin >> prezzo;
	
	if(prezzo < 30.0)
	{
		sconto = prezzo * 12 / 100;
	}
	else
	{
		sconto = prezzo * 25 / 100;
	}
	
	prezzo_finale = prezzo - sconto; 
	
	cout << "Il prezzo scontato vale: " << prezzo_finale << ".\n";
	
	system("pause");
	return 0;
}

