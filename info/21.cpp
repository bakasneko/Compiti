#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, dato un valore reale x, calcoli il valore della funzione:
	y = (x - 2)/(x * (x - 4));
	se viene inserito un valore non ammesso, mostrare il messaggio “Impossibile”
	*/
	
	double x, y;
	
	cout << "Inserire il valore di x: "; 
	cin >> x;
	
	if(x == 0 || x == 4)
	{
		cout << "Impossibile. " << endl;
	}
	else
	{
		y = (x - 2)/(x * (x - 4));
		cout << y << endl; 
	}
		
	system("pause");
	return 0;
}

