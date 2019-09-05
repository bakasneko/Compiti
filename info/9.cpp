#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, dato il prezzo di un prodotto, 
	calcoli il prezzo scontato del 20%
	*/
	
	double prezzo, sconto, prezzo_finale ;
	
	cout << "Inserire il prezzo da scontare: ";
	cin >> prezzo;
	
	sconto = (prezzo * 20)/ 100;
	prezzo_finale = prezzo - sconto;
	
	cout << prezzo << " scontato del 20% vale " << prezzo_finale << ".\n";
	
	system("pause");
	return 0;
}

