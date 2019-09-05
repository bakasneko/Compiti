#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo per controllare la correttezza di una data ricevuta 
	in ingresso attraverso tre diversi input: giorno, mese e anno; per semplicità, 
	supporre tutti i mesi di 30 giorni.
	*/
	
	int giorno, mese, anno;
	
	cout << "Inserire il giorno: ";
	cin >> giorno;
	cout << "Inserire il mese: ";
	cin >> mese;
	cout << "Inserire l'anno: ";
	cin >> anno;
	
	if(giorno < 1 || giorno > 30)
	{
		cout << "Data inesistente. " << endl;
	}
	else if(mese < 1 || mese > 12)
	{
		cout << "Data inesistente. " << endl;
	}
	else if(anno > 2018)
	{
		cout << "Data inesistente. " << endl;
	}
	else
	{
		cout << "Data corretta. " << endl;
	}
	
	system("pause");
	return 0;
}

