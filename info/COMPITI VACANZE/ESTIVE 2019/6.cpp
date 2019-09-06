#include <iostream>

using namespace std;

/*
Scrivere un programma che visualizzi i numeri interi dispari minori o uguali a N, con N letto
da tastiera, strettamente positivo.
*/

int main()
{
	int n;
	
	do
	{
		cout << "Inserire un numero: ";
		cin >> n;
	}while(n <= 0);
	
	for(int i = 1; i <= n; i+=2)
	{
		cout << i << endl;
	}
	
	system("pause");
	return 0;
}

