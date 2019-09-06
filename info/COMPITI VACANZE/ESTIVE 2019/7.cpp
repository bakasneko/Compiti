#include <iostream>

using namespace std;

/*
Scrivere un programma che visualizzi sullo schermo tutti gli interi compresi tra N1 ed N2,
con N1 e N2 inseriti dal'utente e N2 strettamente maggiore di N1, e ne calcoli la somma.
Visualizzare anche il valore della somma. 
*/

int main()
{
	int n1;
	int n2;
	
	cout << "Inserire due numeri: " << endl;
	cout << "N1: ";
	cin >> n1;
	
	do
	{
		cout << endl << "N2: ";
		cin >> n2;
	}while(n2 <= n1);
	
	int somma = 0;
	
	for(int i = n1+1; i < n2; i++)
	{
		cout << i << endl;
		somma += i;
	}
	
	cout << "Somma: " << somma << endl;
	
	system("pause");
	return 0;
}

