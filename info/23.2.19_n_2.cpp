#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che legga una sequenza di 10 numeri nel vettore Vett. 
	Fare inserire un numero di riferimento R all’utente e il programma 
	deve indicare se tale valore R sia contenuto in Vett oppure no.  
	*/
	
	const int MAXN = 10;
	int vett[MAXN];
	
	for(int i = 0; i < MAXN; i++)
	{
		cout << "Inserire un numero: ";
		cin >> vett[i];
	}
	
	int r;
	cout << "\nInserire il valore di riferimento: ";
	cin >> r;
	
	bool trovato = false;
	
	for(int i = 0; i < MAXN; i++)
	{
		if(vett[i] == r)
		{
			trovato = true;
			break;
		}
	}
	
	if(trovato)
	{
		cout << "\nIl valore r e' stato trovato nell'array. \n";
	}
	else
	{
		cout << "\nIl valore r non e' stato trovato nell'array. \n";
	}
	
	system("pause");
	return 0;
}

