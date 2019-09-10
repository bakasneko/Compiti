#include <iostream>

using namespace std;

/*
Scrivere a video i primi n multipli di k, n>0, n e k interi inseriti in input da tastiera.
Ad esempio se n=5 e k=9 scrivere a video:
9, 18, 27, 36, 45.
Dopo aver inserito n controlla che sia strettamente positivo.
Il programma deve contenere una funzione di nome prodotto che calcoli e restituisca come
valore di ritorno il prodotto di due interi, da utilizzare opportunamente nel main, inserendola
in un’iterazione.
*/

int prodotto(int a, int b) {return a * b;}

int main()
{
	int k, n;
	
	cout << "Inserire un numero: ";
	cin >> k;
	
	do
	{
		cout << "Inserire il numero di multipli: ";
		cin >> n;
	}while(n <= 0);
	
	for(int i = 1; i <= n; i++)
	{
		cout << prodotto(n,i) << endl;
	}
	
	system("pause");
	return 0;
}

