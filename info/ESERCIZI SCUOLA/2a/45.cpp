#include <iostream>

using namespace std;

int main()
{
	/*
	Il biglietto di ingresso ad un museo ha le seguenti tariffe. 
	Per i bambini di età inferiore a 6 anni l'ingresso è gratuito 
	(opzione 1), per gli studenti 8 euro (opzione 2), per i 
	pensionati 10 euro (opzione3), per tutti gli altri 15 euro 
	(opzione 4). Creare un programma in cui l’utente inserisce un 
	numero tra 1 e 4 e viene comunicato il prezzo relativo all'
	opzione scelta. Se il numero non è un'opzione valida
	viene mostrato un messaggio di errore.
	*/
	
	int op2 = 8, op3 = 10, op4 = 15, user;
	
	cout << "Sceglere una tariffa: \n";
	cout << "\tOpzione 1: Bambino sotto 6 anni.\n";
	cout << "\tOpzione 2: Studente.\n";
	cout << "\tOpzione 3: Pensionato.\n";
	cout << "\tOpzione 4: Adulto.\n";
	cin >> user;
	
	if(user == 1)
	{
		cout << "Per i bambini di eta' inferiore ai 6 anni l'ingresso e' gratuito.\n";
	}
	else if(user == 2)
	{
		cout << "Per gli studenti il costo del biglietto e' di: " << op2 << " E.\n";
	}
	else if(user == 3)
	{
		cout << "Per i pensionati il costo del biglietto e' di: " << op3 << " E.\n";
	}
	else if(user == 4)
	{
		cout << "Per gli adulti il costo del biglietto e' di: " << op4 << " E.\n";
	}
	else
	{
		cout << "Errore. Bisogna scegliere una delle 4 opzioni sovraelencate.\n";
	}
	
	system("pause");
	return 0;
}











