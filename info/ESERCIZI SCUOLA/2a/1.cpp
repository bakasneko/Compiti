#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che calcoli il doppio 
	di un numero formito in input
	*/
	
	int numero, doppio;
	
	cout << "Inserire un numero: ";
	cin >> numero;
	
	doppio = 2 * numero;
	
	cout << "\nIl doppio di " << numero << " e' " << doppio << "." << endl;
	
	system("pause");
	return 0;
}
