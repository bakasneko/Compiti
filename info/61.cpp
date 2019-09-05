#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, presi in input 
	10 numeri interi, ne calcoli la somma
	*/
	
	int n;
	int somma = 0;
	int cont = 1;
	
	while(cont <= 10)
	{
		cout << "Inserire un numero: ";
		cin >> n;
		somma = somma + n;
		cont++;
	}
	
	cout << "La somma dei dieci numeri inseriti vale: " << somma << endl;
	
	system("pause");
	return 0;
}

