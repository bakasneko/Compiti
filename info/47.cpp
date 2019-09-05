#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che visualizza i numeri naturali da 1 a 20
	*/
	
	int n = 1;
	
	do
	{
		cout << n++ << endl;
	}while(n <= 20);
	
	
	system("pause");
	return 0;
}

