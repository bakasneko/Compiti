#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un programma che acquisisca 10 voti nel vettore 
	Voti, voti compresi tra 1 e 10 e.i, visualizzi la media 
	generale, la percentuale dei voti sufficienti e la 
	percentuale dei voti insufficienti.
	*/
	
	int voti[10];
	int cont_suff = 0;
	int cont_insuff = 0;
	double somma = 0;
	double media = 0;
	double perc_suff = 0;
	double perc_insuff = 0;
	
	for(int i = 0; i < 10; i++)
	{
		do
		{
			cout << "Inserire voto numero " << i+1 << ": ";
			cin >> voti[i];
		}while(voti[i] < 1 || voti[i] > 10);
	}
	
	for(int i = 0; i < 10; i++)
	{
		somma += voti[i];
		if(voti[i] >= 6)
		{
			cont_suff++;
		}
		else
		{
			cont_insuff++;
		}
	}
	
	media = somma/10;
	perc_suff = (cont_suff * 100) / 10;
	perc_insuff = (cont_insuff * 100) / 10;
	
	cout << "Media: " << media << endl;
	cout << "Percentuale voti sufficienti: " << perc_suff << "% " << endl;
	cout << "Percentuale voti insufficienti: " << perc_insuff << "%" << endl;
	
	system("pause");
	return 0;
}

