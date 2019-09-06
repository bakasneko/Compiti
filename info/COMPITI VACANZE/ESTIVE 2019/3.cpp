#include <iostream>

using namespace std;

/*
Scrivere un programma che visualizzi un messaggio a video se un numero intero x inserito
in input da tastiera è contemporaneamente multiplo di 7 e pari. Se almeno una delle due
condizioni non si verifica manda a video il messaggio “il numero non soddisfa almeno una
condizione”. Se entrambe le condizioni sono soddisfatte scrive a video “il numero soddisfa
le condizioni” .
*/

int main()
{
	int x;
	
	cout << "Inserire un numero: ";
	cin >> x;
	
	if(x % 7 == 0 && x % 2 == 0)
	{
		cout << "Il numero soddisfa le condizioni. " << endl;
	}
	else
	{
		cout << "Il numero non soddisfa almeno una condizione. " << endl;
	}
	
	system("pause");
	return 0;
}

