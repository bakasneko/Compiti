#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che aiuti un bambino ad imparare 
	le 4 operazioni fondamentali. Prendere in input i due 
	operandi, l’operatore e il risultato e dire se il 
	risultato è giusto o sbagliato.
	*/
	
	int op1, op2, operatore, risultato;
	
	cout << "Inserire il primo operando: ";
	cin >> op1;
	cout << "Inserire l'operatore:\n ";
	cout << "\t1. +\n";
	cout << "\t2. -\n";
	cout << "\t3. x\n";
	cout << "\t4. :\n";
	do 
	{
		cin >> operatore;
	}while(operatore < 1 || operatore > 4); 
	
	cout << "Inserire il secondo operando: ";
	cin >> op2;
	
	cout << "Inserire il risultato: ";
	cin >> risultato;
	
	if(operatore == 1)
	{
		if(op1 + op2 == risultato)
		{
			cout << "Operazione corretta! " << endl;
		}
		else
		{
			cout << "Operazione errata. " << endl;
		}
	}
	else if(operatore == 2)
	{
		if(op1 - op2 == risultato)
		{
			cout << "Operazione corretta! " << endl;
		}
		else
		{
			cout << "Operazione errata. " << endl;
		}
	}
	else if(operatore == 3)
	{
		if(op1 * op2 == risultato)
		{
			cout << "Operazione corretta! " << endl;
		}
		else
		{
			cout << "Operazione errata. " << endl;
		}
	}
	else if(operatore == 4)
	{
		if(op2 != 0)
		{
			if(op1 / op2 == risultato)
			{
				cout << "Operazione corretta! " << endl;
			}
			else
			{
				cout << "Operazione errata. " << endl;
			}
		}
		else
		{
			cout << "Impossibile eseguire una divisione per 0. " << endl;
		}
	}
	
	system("pause");
	return 0;
}

