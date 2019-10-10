#include <iostream>

using namespace std;

bool cerca(int vett[], int dim, int num)
{
	for(int i = 0; i < dim; i++)
	{
		if(vett[i] == num)
			return true;
	}
	
	return false;
}

int main()
{
	const int mesi = 12;
	int AnnoTemp[mesi];
	bool continua = true;
	int scelta = 0;
	
	for(int i = 0; i < mesi; i++)
	{
		cout << "Inserire la temperatura media del mese numero " << i + 1 << ": ";
		cin >> AnnoTemp[i];
	}
	
	system("cls");
	
	for(int i = 0; i < mesi; i++)
	{
		cout << "Temperatura media nel mese numero " << i + 1 << ": " << AnnoTemp[i] << endl;
	}
	
	system("pause");
	
	do
	{
		system("cls");
		
		cout << "Seleziona opzione:" << endl;
		cout << "1. Calcolare e visualizzare la media annua delle temperature." << endl;
		cout << "2. Cercare e visualizzare la temperatura del mese dato." << endl;
		cout << "3. Visualizzare quante temperature medie risultano positive e quante negative." << endl;
		cout << "4. Calcolare e visualizzare quante temperature siano comprese tra -10 e 10 estremi inclusi." << endl;
		cout << "5. Segnalare la presenza o meno di almeno un -20 tra le temperature medie inserite." << endl;
		cout << "6. Contare e visualizzare quante temperature nel vettore sono uguali alla temperatura media cercata." << endl;
		cout << "7. Cercare e visualizzare la temperatura massima e il numero del mese in cui si verifica." << endl;
		cout << "8. Visualizzare le temperature medie dei mesi che hanno l'indice del vettore dispari." << endl;
		cout << "0. Usicre dal programma." << endl << endl;
		cout << "Opzione: ";
		cin >> scelta;
		system("cls");
		
		switch(scelta)
		{
			case 1:
			{
				float media = 0;
				
				for(int i = 0; i < mesi; i++)
				{
					media += AnnoTemp[i];
				}
				
				media /= (float)mesi;
				
				cout << "La temperatura media dell'anno e' di " << media << endl;
				
				break;
			}
			case 2:
			{
				int mese;
				do
				{
					cout << "Inserire il numero del mese (1-12): ";
					cin >> mese;
				}while(mese < 1 || mese > 12);
				
				system("cls");
				
				cout << "La temperatura media del mese numero " << mese << " e' di: " << AnnoTemp[mese - 1] << endl;
				
				break;
			}
			case 3:
			{
				int positive = 0;
				int negative = 0;
				
				for(int i = 0; i < mesi; i++)
				{
					if(AnnoTemp[i] >= 0)
						positive++;
					else
						negative++;
				}
				
				cout << "L'anno ha avuto " << positive << " temperature medie positive e " << negative << " temperature medie negative" << endl;
				break;
			}
			case 4:
			{
				int count = 0;
				
				for(int i = 0; i < mesi; i++)
				{
					if(AnnoTemp[i] >= -10 && AnnoTemp[i] <= 10)
						count++;
				}
				
				cout << "Le temperatire medie registrate comprese tra -10 e 10 sono " << count << endl;
				
				break;
			}
			case 5:
			{
				bool trovato = cerca(AnnoTemp, mesi, -20);
				
				if(trovato)
					cout << "Esiste almeno un mese con la temperatura media pari a -20" << endl;
				else
					cout << "Non esiste alcun mese con una temperatura media pari a -20" << endl;
				
				break;
			}
			case 6:
			{
				int CercaTemp;
				do
				{
					cout << "Inserire la temperatura da cercare (compresa tra -30 e 30): ";
					cin >> CercaTemp;
				}while(CercaTemp < -30 || CercaTemp > 30);
				
				int count = 0;
				
				for(int i = 0; i < mesi; i++)
				{
					if(AnnoTemp[i] == CercaTemp)
						count++;
				}
				
				cout << "Sono state registrate " << count << " temperature pari a " << CercaTemp << endl;
				
				break;
			}
			case 7:
			{
				int max = AnnoTemp[0];
				int indicemax = 0;
				
				for(int i = 1; i < mesi; i++)
				{
					if(AnnoTemp[i] > max)
					{
						max = AnnoTemp[i];
						indicemax = i;
					}
				}
				
				cout << "Il mese con la temperatura maggiore registrata (" << max << ") e' il numero " << indicemax + 1 << endl;
				
				break;
			}
			case 8:
			{
				for(int i = 0; i < mesi / 2; i++)
				{
					cout << "Temperatura media nel mese con indice " << i * 2 + 1 << ": " << AnnoTemp[i * 2 + 1] << endl;
				}
				break;
			}
			case 0:
			{
				continua = false;
				cout << "Chiusura del programma in corso..." << endl;
				break;
			}
				
		}
		
		system("pause");
	}while(continua);
	return 0;
}

