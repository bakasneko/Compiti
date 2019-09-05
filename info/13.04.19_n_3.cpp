#include <iostream>

using namespace std;

/*
Scrivere una funzione RipetiCarNvolte che riceva come parametri un 
carattere e un numero positivo compreso tra 1 e 30 (e.i.) e visualizzi 
separati da uno spazio, N volte il carattere sulla stessa riga. 
Realizzare un programma che consenta di provare la funzione scritta. 
*/

void ripetiNVolte(int number, char character)
{
	for(int i = 0; i < number; i++)
	{
		cout << character << " ";
	}
}

int main()
{
	int  n; 
	char c;
	
	cout << "Inserire un carattere: ";
	cin >>  c;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >> n;
	}while(n < 1 || n > 30);
	
	ripetiNVolte(n, c);
	
	
	system("pause");
	return 0;
}

