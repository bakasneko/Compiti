#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che, presi in input 
	due numeri interi N ed X (con N>0), visualizzi 
	gli N numeri interi precedenti ad X.
	*/
	
	int n, x;
	
	do
	{
		cout << "Inserire il valore di n: ";
		cin >> n;
	}while(n <= 0);
	
	cout << "Inserire il valore di x: ";
	cin >> x;
	
	for(int i = (x - 1); i >= (x - n); i--)
	{
		cout << i << endl;
	}
	
	system("pause");
	return 0;
}

