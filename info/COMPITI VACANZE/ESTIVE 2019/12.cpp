#include <iostream>

using namespace std;

/*
Scrivere un programma per calcolare il fattoriale di un numero intero positivo. Il programma deve
contenere una funzione di nome fattoriale che calcoli e restituisca come valore di ritorno il fattoriale
di un intero positivo che sarà richiamato opportunamente nel main.
(La funzione fattoriale è definita su valori interi >= 0:
Fatt(0)=1 e Fatt(N)=N*(N– 1)*(N– 2)*… *1)
*/

int Fattoriale(int N)
{
	if(N == 0 || N == 1)
	{
		return 1;
	}
	else
	{
		return N * Fattoriale(N-1);
	}
}

int main()
{
	int n;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >> n;
	}while(n < 0);
	
	cout << "Il fattoriale di " << n << " e' " << Fattoriale(n) << endl;
	
	system("pause");
	return 0;
}

