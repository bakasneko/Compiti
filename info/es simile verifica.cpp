#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	const int N = 5; 
	int fiumi[N];
	/*1
	- Inserire i valori nell'array (positivi) 
	e visualizzarli uno per riga
	*/
	
	for(int i = 0; i < N; i++)
	{
		do
		{
			cout << "Inserire la lunghezza n." << i+1 << " : ";
			cin >> fiumi[i];
		}while(fiumi[i] <= 0);
	}
	
	system("pause");
	system("cls");
	
/*	for(int i = 0; i < N; i++)
	{
		cout << fiumi[i] << endl;
	}

	system("pause");
	system("cls");	
	
	/*2
	- Visualizzare le lunghezze dall'ultima 
	alla prima, precedute dall'indice
	
	
	for(int i = N-1; i >= 0; i--)
	{
		cout << i+1 << ". " << fiumi[i] << endl;
	}

	system("pause");
	system("cls");
	
	/*3 
	- Aumenta di 7km le lunghezze multiple di 100
	
	
	for(int i = 0; i < N; i++)
	{
		if(fiumi[i] % 100 == 0)
		{
			fiumi[i] += 7;
		}
	}
	
	/*4
	- Calcolare e visualizzare la media.
	Contare e visualizzare i valori oltre la media.
	
	
	int somma = 0;
	int cont = 0;
	float media = 0;
	
	for(int i = 0; i < N; i++)
	{
		somma += fiumi[i];
	}
	
	media = (float)somma / N;
	
	for(int i = 0; i < N; i++)
	{
		if(fiumi[i] > media)
		{
			cont++;
		}
	}
	
	system("pause");
	system("cls");
	
	cout << "La media delle lunghezze e' " << media << " e " << cont << " lunghezze superano la media.\n";
	
	/*5
	- Individuare e visualizzare il valore maggiore
	
	
	int maxval = fiumi[0];
	
	for(int i = 0; i < N; i++)
	{
		if(fiumi[i] > maxval)
		{
			maxval = fiumi[i];
		}
	}
	
	cout << "Il valore maggiore e' " << maxval << ".\n";
	
	/*6
	- Dato un numero casuale tra 1 e N visualizzare le 
	lunghezze (separate da tab) nelle prime val_indice 
	posizioni
	
	
	srand(time(NULL));
	int valIndice = rand() % N + 1;
	
	for(int i = 0; i < valIndice; i++)
	{
		cout << fiumi[i] << "\t";
	}
	
	/*7 
	- Visualizzare le lunghezze (3 spazi) negli indici 
	multipli di 6. Alla fine vai a capo 2 volte
	
	
	for(int i = 0; i < N; i += 6)
	{
		cout << fiumi[i] << "   ";
	}
	
	cout << "\n" << endl;
	
	/*8 
	- Raddoppia le lunghezze lunghe 5km
	
	
	for(int i = 0; i < N; i++)
	{
		if(fiumi[i] == 5)
		{
			fiumi[i] *= 2;
		}
	}
	
	/*9
	- Visualizzare se la somma supera un valore 
	massimo inserito dall'utente
	*/
	
	int lunghTot = 0;
	int somma2 = 0;
	bool supera = false;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >>  lunghTot;
	}while(lunghTot <= 0);
	
	for(int i = 0; i < N && supera == false; i++)
	{
		somma2 += fiumi[i];
		if(somma2 > lunghTot)
		{
			supera = true;
		}
	}
	
	if(supera)
	{
		cout << "La somma delle lunghezze supera il valore inserito.\n";
	}
	else
	{
		cout << "La somma delle lunghezze non supera il valore inserito.\n";
	}
	
	

	
	system("pause");
	return 0;
}
