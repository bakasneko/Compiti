#include <iostream>

using namespace std;

bool cerca(int vett[], int dim, int num)
{
	for(int i = 0; i < dim; i++)
	{
		if(vett[i] == num)
			return true;
	}
	
	return false;
}

int main()
{
	const int N = 10;
	int vett[N];
	int quadrati[N];
	int unici[N];
	
	for(int i = 0; i < N; i++)
	{
		cout << "Inserire il numero " << i + 1 << " del vettore: ";
		cin >> vett[i];
	}
	
	system("cls");
	
	for(int i = 0; i < N; i++)
	{
		cout << "Numero " << i + 1 << " del vettore: " << vett[i] << endl;
	}
	
	system("pause");
	system("cls");
	
	for(int i = 0; i < N; i++)
	{
		quadrati[i] = vett[i] * vett[i];
		cout << "Numero " << i + 1 << " del vettore quadrati: " << quadrati[i] << endl;
	}
	
	system("pause");
	system("cls");
	
	for(int i = 0; i < N; i++)
	{
		unici[i] = 0;
	}
	
	for(int i = 0; i < N; i++)
	{
		if(!cerca(unici, N, vett[i]))
			unici[i] = vett[i];
		
		cout << "Numero " << i + 1 << " del vettore senza doppi: " << unici[i] << endl;
	}
	
	system("pause");
	return 0;
}
