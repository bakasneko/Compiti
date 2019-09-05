#include <iostream>
#include <cmath>

using namespace std;

/*
  Scrivere un programma che utilizzi cinque funzioni e che, 
  ricevuto come parametro il valore del raggio, calcoli a 
  scelta dell’utente:
a.    il diametro del cerchio
b.    l’area di un cerchio
c.    la circonferenza
d.    l’area della superficie di una sfera
e.    il volume di una sfera.
Il programma deve visualizzare un menu, consentire di 
calcolare più di una misura con lo stesso raggio e 
contenere un’opzione per l’uscita dal programma. 
*/

int Diametro(int raggio)
{
	return (raggio * 2);
}

int AreaCerchio(int raggio)
{
	return (raggio * raggio * M_PI);
}

int CirconferenzaCerchio(int raggio)
{
	return (raggio * 2 * M_PI);
}

int SuperficieSfera(int raggio)
{
	return (4 * raggio * M_PI);
}

int VolumeSfera(int raggio)
{
	return (4 / 3.0 * M_PI * (pow(raggio, 3)));
}

int main()
{
	int r, scelta;
	
	do
	{
		cout << "Inserire il raggio: ";
		cin >> r;
	}while(r <= 0);
	
	do
	{
		cout << "Il raggio e' " << r << ".\n";
		cout << "1. \tDiametro del cerchio\n";
		cout << "2. \tArea del cerchio\n";
		cout << "3. \tCirconferenza del cerchio\n";
		cout << "4. \tSuperficie della sfera\n";
		cout << "5. \tVolume sfera\n";
		cout << "0. \tUscita\n\n";
		cout << "Scelta --> ";
		cin >> scelta;
		
		switch(scelta)
		{
			case 1:
				cout << "Il diametro e' " << Diametro(r) << ".\n";
			break;
			case 2:
				cout << "L'area del cerchio e' " << AreaCerchio(r) << ".\n";
			break;
			case 3:
				cout << "La circonferenza del cerchio e' " << CirconferenzaCerchio(r) << ".\n";
			break;
			case 4:
				cout << "La superficie della sfera e' " << SuperficieSfera(r) << ".\n";
			break;
			case 5:
				cout << "Il volume della sfera e' " << VolumeSfera(r) <<  ".\n";
			break;
			case 0:
				cout << "Arrivederci!\n";
			break;
			default:
				cout << "Scelta non valida. Riprova.\n";
			 
		}	
		system("pause");
		system("cls");
	}while(scelta != 0);
	
	
	system("pause");
	return 0;
}
