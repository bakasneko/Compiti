#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivi un programma che, preso in input un valore compreso 
	tra 1 e 12, indichi a quale parte dell'anno scolastico 
	appartiene il mese corrispondente, tenendo conto che dall'
	1 settembre al 31 dicembre è primo trimestre, dall'1 
	gennaio al 30 giugno il secondo pentamestre e i rimanenti 
	mesi sono classificati come "vacanza estiva".
	*/
	
	int mese;
	
	do
	{
		cout << "Inserire il mese: ";
		cin >> mese;
	}while(mese < 1 || mese > 12);
	
	switch(mese)
	{
		case 1:
			cout << "Mese di gennaio. \nGiorni: 31." << endl;
			cout << "Secondo pentamestre. " << endl;
		break;
		case 2:
			cout << "Mese di febbraio. \nGiorni: 28." << endl;
			cout << "Secondo pentamestre." << endl;
		break;	
		case 3:
			cout << "Mese di marzo. \nGiorni: 31." << endl;
			cout << "Secondo pentamestre. " << endl;
		break;		
		case 4:
			cout << "Mese di aprile. \nGiorni: 30." << endl;
			cout << "Secondo pentamestre. " << endl;
		break;		
		case 5:
			cout << "Mese di maggio. \nGiorni: 31." << endl;
			cout << "Secondo pentamestre. " << endl;
		break;		
		case 6:	
			cout << "Mese di giugno. \nGiorni: 30." << endl;
			cout << "Secondo pentamestre. " << endl;
		break;
		case 7:
			cout << "Mese di luglio. \nGiorni: 31. " << endl;
			cout << "Vacanze estive. " << endl;
		break;
		case 8:
			cout << "Mese di agosto. \nGiorni: 31. " << endl;
			cout << "Vacanze estive. " << endl;
		break;
		case 9:
			cout << "Mese di settembre. \nGiorni 30." << endl;
			cout << "Primo trimestre. " << endl;
		break;		
		case 10:
			cout << "Mese di ottobre. \nGiorni 31." << endl;
			cout << "Primo trimestre. " << endl;
		break;
		case 11:
			cout << "Mese di novembre. \nGiorni 30." << endl;
			cout << "Primo trimestre. " << endl;
		break;
		case 12:
			cout << "Mese di dicembre. \nGiorni 31." << endl;
			cout << "Primo trimestre. " << endl;
		break;
	}
	
	system("pause");
	return 0;
}

