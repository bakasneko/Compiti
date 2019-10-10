#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int vett[N];
	int x;
	bool trovato = false;
	int i = 0;
	
	for(int i = 0; i < N; i++)
	{
		cout << "Inserire il numero " << i + 1 << " del vettore: ";
		cin >> vett[i];
	}
	
	system("cls");
	
	cout << "Inserire il valore x: ";
	cin >> x;
	
	while(i < N && !trovato)
	{
		if(vett[i] == x)
		{
			trovato = true;
		}
		else
		{
			i++;
		}
	}
	
	system("cls");
	
	if(i == N)
	{
		cout << "L'elemento cercato non e' stato trovato all'interno del vettore" << endl;
	}
	else
	{
		cout << "L'elemento e' stato trovato all'indice " << i << " del vettore" << endl;
	}
	
	system("pause");
	return 0;
}
