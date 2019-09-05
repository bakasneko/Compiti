#include <iostream>

using namespace std;

/*
Scrivere un programma che, dopo aver letto un numero che rappresenti 
un anno compreso tra 0 e 2100 (e.i), richiami la funzione isBisestile 
che riceva come parametro il valore dell’anno e restituisca true se 
l’anno è bisestile, false altrimenti. Visualizzare un messaggio sull’
esito del risultato. (Si rammenta che un anno è bisestile se il suo 
valore è divisibile per 4 ma non per 100, oppure se è divisibile 
per 400 (il 1900 non fu bisestile, il 2000 sì)).
*/

int Bisestile(int anno)
{
	bool bis = false;
	
	if(anno % 4 == 0)
	{
		if(anno % 100 == 0)
		{
			if(anno % 400 == 0)
			{
				bis = true;
			}
		}
		else
		{
			bis = true;
		}
	}
	
	return  bis;
}

int main()
{
	int a;
	
	do
	{
		cout << "Inserire l'anno: ";
		cin >> a;
	}while(a < 1 || a > 2100);
	
	if(Bisestile(a))
	{
		cout << a << " e' un anno bisestile. " << endl;
	}
	else
	{
		cout << a << " non e' un anno bisestile. " << endl;
	}
		
	system("pause");
	return 0;
}

