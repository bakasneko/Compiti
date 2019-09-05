#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo che, presi in input gli estremi a e b di un intervallo e un 
	valore x, visualizzi il messaggio "Il valore è interno all'intervallo" se a = x = b, 
	altrimenti "Il valore è esterno all'intervallo".
	*/
	
	int a, b, x;
	
	cout << "Inserire il valore di a: ";
	cin >> a;
	
	do
	{
		cout << "Inserire il valore di b: ";
		cin >> b;
	}while(b <= a);
	
	cout << "Inserire il valore di x: ";
	cin >> x;
	
	if(x <= b && x >= a)
	{
		cout <<"Il valore e' all'inerno dell'intervallo. " << endl;
	}
	else
	{
		cout << "Il valore e' esterno all'intervallo. " << endl;
	}
	
	system("pause");
	return 0;
}

