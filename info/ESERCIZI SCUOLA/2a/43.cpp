#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, preso in input un valore 
	compreso tra 1 e 12, indichi a quale trimestre
	dell’anno appartiene il mese corrispondente.
	*/
	
	int mese;
	
	do
	{
		cout << "Inserire un mese: ";
		cin >> mese;
	}while(mese < 1 || mese > 12);
	
	if(mese >= 1 && mese <= 3)
	{
		cout << "primo trimestre: gennaio, febbraio, marzo." << endl;
	}
	else if(mese >= 4 && mese <= 6)
	{
		cout << "secondo trimestre: aprile, maggio, giugno. " << endl;
	}
	else if(mese >= 7 && mese <= 9)
	{
		cout << "terzo trimestre: luglio, agosto, settembre. " << endl;
	}
	else 
	{
		cout << "quarto trimestre: ottobre, novembre, dicembre " << endl;
	}
	
	
	system("pause");
	return 0;
}

