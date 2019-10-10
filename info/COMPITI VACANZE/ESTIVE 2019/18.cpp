#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	const int N = 12;
	int vett[N];
	int w[N];
	srand(time(NULL));
	
	
	for(int i = 0; i < N; i++)
	{
		vett[i] = rand() % 91 + 10;
		cout << "Numero " << i + 1 << " del vettore: " << vett[i] << endl;
	}
	
	system("pause");
	system("cls");
	
	for(int i = 0; i < N/2; i++)
	{
		int aux = vett[i];
		vett[i] = vett[N - i - 1];
		vett[N - i - 1] = aux;
	}
	
	for(int i = 0; i < N; i++)
	{
		cout << "(1) Numero " << i + 1 << " del vettore ribaltato: " << vett[i] << endl;
	}
	
	system("pause");
	system("cls");
	
	for(int i = 0; i < N; i++)
	{
		w[i] = vett[N - i - 1];
	}
	
	for(int i = 0; i < N; i++)
	{
		cout << "(2) Numero " << i + 1 << " del vettore ribaltato: " << w[i] << endl;
	}
	
	system("pause");
	return 0;
}
