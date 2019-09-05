#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che calcoli la somma dei primi 10 numeri naturali.
	*/
	
	int n = 1, somma = 0;
	
	do
	{
		somma = somma + n;
		n++;
	}while(n <= 10);
	
	cout << "La somma dei primi dieci numeri naturali e' pari a: " << somma << endl;
	
	
	system("pause");
	return 0;
}

