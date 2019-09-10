#include <iostream>

using namespace std;

/*
Dati in input da tastiera due interi A e D scrivere a video i primi N termini, con N inserito
dall'utente strettamente positivo, della seguente successione:
A+D, (A+D)+D, (A+D+D)+D, …
cioè della successione in cui ogni termine si ottiene dal precedente sommando un valore
costante D. (Per tua conoscenza, una successione definita in questo modo si chiama
progressione aritmetica di ragione D). 
*/

int main()
{
	int a, d, n;
	
	cout << "Inserire due numeri: " << endl;
	cout << "A: ";
	cin >> a;
	cout << endl << "D: ";
	cin >> d;
	
	do
	{
		cout << "Inserire un valore numerico: ";
		cin >> n;
	}while(n <= 0);
	
	int somma = a + d;
	
	cout << "Successione: \n";
	
	for(int i = 0; i < n; i++)
	{
		cout << somma << endl;
		somma += d;
	}
	
	system("pause");
	return 0;
}

