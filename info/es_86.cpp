#include <iostream>

using namespace std;

int main()
{
	/*
	Dati una serie di movimenti di un conto corrente bancario 
	(incassi e pagamenti) che inizia da un saldo 0 ed è chiusa 
	da un movimento di importo 0,  calcolare il saldo finale. 
	Se il saldo è positivo aggiungere un interesse attivo dell’
	1,5%, altrimenti addebitare un interesse passivo del 3%. 
	Infine comunicare il saldo definitivo.
	*/
	
	double movimento;
	double saldo = 0;
	double saldo_finale = 0;
	char scelta;
	
	cout << "Scegliere un'azione " << endl;
	cout << "  a. Prelevare." << endl;
	cout << "  b. Versare. " << endl;
	cout << "  c. Termina azione. " << endl;
	cin >> scelta;
	
	system("cls");
	
	while(scelta != 'c')
	{
		switch(scelta)
		{
			case 'a':
			cout << "Inserire la cifra da prelevare: " << endl;
			cin >> movimento;
			saldo-=movimento;
		break;
		case 'b':
			cout << "Inserire la cifra da versare: " << endl;
			cin >> movimento;
			saldo+=movimento;
		break;
		default:
			cout << "Azione non valida. Riprova. " << endl;
		}
		cout << "\nScegliere un'azione " << endl;
		cout << "  a. Prelevare." << endl;
		cout << "  b. Versare. " << endl;
		cout << "  c. Termina azione. " << endl;
		cin >> scelta;
		system("cls");
	}
	
	cout << "Il saldo finale e' di " << saldo << endl;
	
	system("pause");
	return 0;
}

