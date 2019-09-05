#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, letto in input il prezzo in €,
	ne calcoli il valore in lire
	1€ = 1937.27L
	*/
	
	double euro, lire;
	double cambio = 1937.27;
	
	cout << "Inserire il prezzo in euro: ";
	cin >> euro;
	
	lire = euro * cambio;
	
	cout << euro << " in lire vale " << lire << ". "<< endl;
	
	system("pause");
	return 0;
}

