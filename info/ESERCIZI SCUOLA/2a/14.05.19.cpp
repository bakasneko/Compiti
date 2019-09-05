#include <iostream>

using namespace std;

/*
Scrivere un programma che, attraverso un menu, svolga le seguenti operazioni 
relative ai voti di una pagella contenente 10 voti interi, ognuna ottenuta 
da una funzione corrispondente:
1. Carica(...): Inserimento dei voti controllando che siano compresi tra 1 e 10 e.i.
2. Visualizza(...): Visualizzazione dei voti preceduti da “Materia #: voto”
3. MaxVoto(...): Visualizzare il voto massimo
4. LeggiVoto(...): Legge e restituisce un voto controllandone la correttezza
5. CambiaVoto(...): Modificare il voto n-esimo con un altro voto fornito da tastiera
6. ContaVoto(...): Contare quanti voti sono uguali a un voto dato in input
7. MediaVoti(...): Media dei voti
8. MaterieDelVoto(...): receve tra i parametri un voto e visualizza l'elenco delle 
materie in cui è stato assegnato tale voto
9. MinVoto(...): Resitutisce il voto minimo
10. CampoVariazione(...): Restituisce il range dei voti della pagella 
(differenza tra il voto massimo e il voto minimo)
11. CercaVoto(...): ricevuto tra i parametriun voto letto, restituisce true se il voto 
è presente almeno una volta nella pagella, altrimenti false
12. CambiaVoti(...): Riceve come parametri i voti da cambiare eil voto con il quale 
deve essere sostituito ogni volta che il voto da cambiare sia presente
*/

//4
int LeggiUnVoto()
{
	int Voto;
	
	do
	{
		cout << "Inserire voto : ";
		cin >> Voto;
	}while(Voto < 1 || Voto > 10);
	
	return Voto;	
}

//1
void Carica(int Voti[], int dim)
{
	for(int i = 0; i < dim; i++)
	{
		Voti[i] = LeggiUnVoto();
	}
}

//2
void Visualizza(int Voti[], int dim)
{
	
	for(int i = 0; i < dim; i++)
	{
		cout << "Materia " << i+1 << ": " << Voti[i] << endl;
	}
}

//3
int MaxVoto(int Voti[], int dim)
{
	int votomax = Voti[0];
	
	for(int i = 1; i < dim; i++)
	{
		if(Voti[i] > votomax)
		{
			votomax = Voti[i];
		}
	}
	
	return votomax;
}

//5
void CambiaVoto(int Voti[], int Posizione, int Voto)
{
	Voti[Posizione-1] = Voto;
}

//6
int ContaVoto(int Voti[], int dim, int Voto)
{
	int cont = 0;
	
	for(int i = 0; i < dim; i++)
	{
		if(Voti[i] == Voto)
		{
			cont++;
		}
	}
	
	return cont;
}

//7
float MediaVoti(int Voti[], int dim)
{
	int somma = 0;
	
	for(int i = 0; i < dim; i++)
	{
		somma += Voti[i];
	}
	
	return somma/(float)dim;
}

//8
void MaterieDelVoto(int Voti[], int dim, int Voto)
{	
	for(int i = 0; i < dim; i++)
	{
		if(Voti[i] == Voto)
		{
			cout << "Materia " << i+1 << endl;
		}
	}
}
//9
int MinVoto(int Voti[], int dim)
{
	int votomin = Voti[0];
	
	for(int i = 1; i < dim; i++)
	{
		if(Voti[i] < votomin)
		{
			votomin = Voti[i];
		}
	}
	return votomin;
}

//10
int CampoVariazione(int Voti[], int dim)
{
	int maxvoto = MaxVoto(Voti, dim);
	int minvoto = MinVoto(Voti, dim);
	
	return (maxvoto - minvoto);
}

//11
bool CercaVoto(int Voti[], int dim, int Voto)
{
	bool trovato = false;
	
	for(int i = 0; i < dim && trovato == false ; i++)
	{
		if(Voti[i] == Voto)
		{
			trovato = true;
		}	
	}
	
	return trovato;
}

//12
void CambiaVoti(int Voti[], int dim, int voto1, int voto2)
{
	for(int i = 0; i < dim; i++)
	{
		if(Voti[i] == voto1)
			Voti[i] = voto2;
	}
}

int main()
{
	const int N = 5;
	int voti[N];
	int scelta;
	int voto;
	int voto2;
	int posizione;
	bool primoavvio = true;
	
	do
	{
			if(primoavvio)
		{
			do
			{
				cout << "1. Caricare i voti della pagella" << endl;
				cout << "\n0. Esci. " << endl << endl;
				cout << "Scegli un'azione da svolgere: " << endl;
				cin >> scelta;
				cout << endl << endl;
			}while(scelta != 0 && scelta != 1);
			switch(scelta)
			{
				case 1:
					Carica(voti, N);
					primoavvio = false;
				break;
				case 0:
					cout << "Arrivederci! " << endl;
				break;
				default:
					cout << "Opzione non valida. Riprova." << endl;
			}
				
			system("pause");
			system("cls");
		}
		else
		{
		
			cout << "1. Caricare i voti della pagella" << endl;
			cout << "2. Visualizzare la pagella pagella" << endl;
			cout << "3. Visualizzare il voto massimo" << endl;
			cout << "4. Cambiare un voto" << endl;
			cout << "5. Contare quanti voti sono uguali ad un voto dato" << endl;
			cout << "6. Visualizzare la media" << endl;
			cout << "7. Cerca materie per voto" << endl;
			cout << "8. Visualizza il voto minimo" << endl;
			cout << "9. Visualizza il range dei voti della pagella" << endl;
			cout << "10. Vedere se un voto e' presente nella pagella" << endl;
			cout << "11. Cambia tutti i voti uguali con un altro voto" << endl;
			cout << "\n0. Esci. " << endl << endl;
			cout << "Scegli un'azione da svolgere: " << endl;
			cin >> scelta;
			
			cout << endl << endl;
			
			switch(scelta)
			{
				case 1:
					Carica(voti, N);
				break;
				
				case 2:
					Visualizza(voti, N);
				break;
				
				case 3:
					cout << "Il voto massimo e' " << MaxVoto(voti, N) << endl;			
				break;
				
				case 4: 
					for(int i = 0; i < N; i++)
					{
						cout << "Materia " << i+1 << ": " << voti[i] << endl;
					}
					
					do
					{
						cout << "Inserire la materia di cui si vuole modificare il voto: ";
						cin >> posizione;
					}while(posizione < 1 || posizione > 10);
					
					voto = LeggiUnVoto();
					
					CambiaVoto(voti, posizione, voto);
					
					cout << "Il voto e' stato cambiato correttamente." << endl;
				break;
				
				case 5: 
					voto = LeggiUnVoto();
					cout << "Nella pagella ci sono " << ContaVoto(voti, N, voto) << " voti uguali a " << voto << endl;
				break;
				
				case 6:
					cout << "La media dei voti e' " << MediaVoti(voti, N) << endl;	
				break;
				
				case 7:
					voto = LeggiUnVoto();
					MaterieDelVoto(voti, N, voto);	
				break;
					
				case 8:
					cout << "Il voto minimo e' " << MinVoto(voti, N) << endl;
				break;
				
				case 9:
					cout << "Il range dei voti e' " << CampoVariazione(voti, N) << endl;
				break;
				
				case 10:
					voto = LeggiUnVoto();
					if(CercaVoto(voti, N, voto))
						cout << voto << " e' presente almeno una volta nella pagella " << endl;
					else
						cout << voto << " non e' presente almeno una volta nella pagella " << endl;
				break;
				
				case 11:
					voto = LeggiUnVoto();
					voto2 = LeggiUnVoto();
					CambiaVoti(voti, N, voto, voto2);
					cout << "I voti sono stati cambiati correttamente." << endl;
				break;	
				
				case 0:
					cout << "Arrivederci! " << endl;
				break;
				
				default:
					cout << "Opzione non valida. Riprova." << endl;
			}
			
			system("pause");
			system("cls");
			
		}
	}while(scelta != 0);
	
	system("pause");
	return 0;
}
