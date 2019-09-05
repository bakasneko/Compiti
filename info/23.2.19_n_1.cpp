#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che legga una sequenza di 6 interi e:
		a. li memorizzi nel vettore Numeri
		
		b. calcoli il quadrato di ogni valore e lo memorizzi 
		alla posizione corrispondente di un altro vettore Quadrati
		
		c.calcoli analogamente il cubo di ogni valore e lo memorizzi alla posizione corrispondente di un terzo vettore Cubi.
		
		d. visualizzi su tre righe consecutive i vettori Numeri, Quadrati e Cubi con i valori spaziati da “tab”.
	*/
	const int N = 6;
	
	int numeri[N];
	
	for(int i = 0; i < N; i++)
	{
		cout << "Inserire un valore: ";
		cin >> numeri[i];
	}
	
	int quadrati[N];
	
	for(int i = 0; i < N; i++)
	{
		quadrati[i] = numeri[i] * numeri[i];
	}
	
	int cubi[N];
	
	for(int i = 0; i < N; i++)
	{
		cubi[i] = quadrati[i] * numeri[i];
	}
	
	for(int i = 0; i < N; i++)
	{
		cout << numeri[i] << "\t" << quadrati[i] << "\t" << cubi[i] << "\n";
	}
	
	system("pause");
	return 0;
}

