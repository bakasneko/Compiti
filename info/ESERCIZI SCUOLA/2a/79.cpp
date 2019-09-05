#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritomo che calcoli la medie di N voti di un alunno.
	*/
	
	int n;
	double somma = 0;
	double media, voto;
	
	do
	{
		cout << "Inserisci un numero: ";
		cin >> n;
	}while(n <= 0);
	
	for(int i = 1; i <= n; i++)
	{
		do
		{
			cout << "Inserisci un voto: ";
			cin >> voto;
		}while(voto <= 0);
		somma+=voto;
	}
	
	media = somma / n;
	
	cout << "La media dei " << n << " voti inseriti e' di " << media << ".\n";
	
	system("pause");
	return 0;
}

