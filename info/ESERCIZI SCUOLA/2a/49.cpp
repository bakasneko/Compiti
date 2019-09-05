#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che visualizza i numeri naturali dispari da 3 a 21.
	*/
	
	int n = 3;
	
	do
	{
		cout << n << endl;
		n+= 2;
	}while(n <= 21);
	
	system("pause");
	return 0;
}

