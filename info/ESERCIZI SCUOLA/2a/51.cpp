#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che visualizza il quadrato dei numeri naturali compresi tra 2 a 20.
	*/
	
	int n = 2;
	
	do
	{
		cout << n*n << endl;
		n++;
	}while(n <= 20);
	
	
	system("pause");
	return 0;
}

