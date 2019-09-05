#include <iostream>

using namespace std;

/*
Scrivere un programma che, letti i valori della base 
(un intero qualunque) e dell’esponente (un intero non negativo), 
li passi alla funzione Potenza che riceva tali valori e 
restituisca il valore di baseesponente calcolato attraverso 
moltiplicazioni successive. Il programma principale visualizzerà 
infine il risultato.
*/

double Potenza(int Base, int Esponente)
{
	int Risultato = Base;
	
	if(Esponente == 0 && Base != 0)
	{
		return 1;
	}
	else
	{
		
		if(Esponente > 0)
		{
			for(int i = 0; i < Esponente - 1; i++)
			{
				Risultato *=  Base;
			}
			return Risultato;
		}
		else
		{
			Esponente = 0 - Esponente;
			for(int i = 0; i < Esponente - 1; i++)
			{
				Risultato *=  Base;
			}
			return 1/(double) Risultato;
		}
	}
}

int main()
{
	int base, esponente;
	
	do
	{
		cout << "Inserire la base: ";
		cin >> base;
	}while(base == 0);
	
	cout << "Inserire l'esponente: ";
	cin >> esponente;

	cout << "Il risultato e' " << Potenza(base, esponente) << ".\n";
	
	system("pause");
	return 0;
}

