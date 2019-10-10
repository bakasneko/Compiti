#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int vett[N];
	bool crescente = true;
	
	
	for(int i = 0; i < N; i++)
	{
		cout << "Inserire il numero " << i + 1 << " del vettore: ";
		cin >> vett[i];
	}
	
	system("cls");
	
	int i = 0;
	while(i < N - 1 && crescente)
	{
		crescente = vett[i] < vett[i + 1];
		/*
			equivale a
			if(vett[i] < vett[i + 1])
				crescente = true
			else
				crescente = false
		*/
		i++;
	}
	
	if(crescente)
		cout << "Il vettore e' in ordine crescente" << endl;
	else
		cout << "Il vettore non e' in ordine crescente" << endl;
	
	system("pause");
	return 0;
}
