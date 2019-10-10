#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int vett[N];
	int x;
	int contminore = 0, contuguale = 0, contmaggiore = 0;
	
	for(int i = 0; i < N; i++)
	{
		cout << "Inserire il numero " << i + 1 << " del vettore: ";
		cin >> vett[i];
	}
	
	system("cls");
	
	cout << "Inserire il valore x: ";
	cin >> x;
	
	for(int i = 0; i < N; i++)
	{
		if(x > vett[i])
			contmaggiore++;
		else if(x == vett[i])
			contuguale++;
		else
			contminore++;
	}
	
	system("cls");
	
	cout << "Nel vettore sono presenti " << contmaggiore << " numeri minori di x," << endl;
	cout << contuguale << " numeri uguali ad x e " << contminore << " numeri maggiori di x." << endl;
	
	system("pause");
	return 0;
}
