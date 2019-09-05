#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che visualizzi in ordine crescente 
	tutti i numeri naturali compresi tra due numeri scelti 
	dall'utente (estremi inclusi).
	*/
	
	int inizio, fine, num; 
	
	cout << "Inserire il primo numero: ";
	cin >> inizio;
	
	do
	{
		cout << "Inserire il secondo numero: ";
		cin >> fine;
	}while(fine <= inizio); 
	
	num = inizio;
	
	do
	{
		cout << num++ << endl;
	}while(num <= fine);
	
	
	system("pause");
	return 0;
}

