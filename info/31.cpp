#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere l'algoritmo per visualizzare in ordine 
	decrescente tre valori numerici ricevuti in input.
	*/
	
	int a, b, c; 
	
	cout << "Inserire il primo numero: ";
	cin >> a;
	cout << "Inserire il secondo numero: ";
	cin >> b;
	cout << "Inserire il terzo numero: ";
	cin >> c;
	
	if(a > b)
	{
		if(c > a)
		{
			cout << c << " " << a << " " << b << endl;
		}
		else if(c > b)
		{
			cout  << a << " " << c << " " << b << endl;
		}
		else 
		{
			cout << a << " " << b << " " << c << endl;
		}
	}
	else if(c > b)
	{
		cout << c << " " << b << " " << a << endl;
	}
	else if(c > a)
	{
		cout << b << " " << c << " " << a << endl;
	}
	else 
	{
		cout << b << " " << a << " " << c << endl;
	}
	
	
	
	system("pause");
	return 0;
}

