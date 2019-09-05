#include <iostream>
#include <cmath>

using namespace std;

/*
Scrivere un programma che, letti tre numeri interi positivi, 
richiami una funzione TernaTriangolare che stabilisca se i 
tre numeri ricevuti come parametri possano costituire o meno 
le misure di un triangolo rettangolo. Visualizzare l’esito 
dell’analisi ottenuto.
*/

bool TernaPitagorica(double CatetoMinore, double CatetoMaggiore, double Ipotenusa)
{
	return pow(Ipotenusa, 2) == pow(CatetoMinore, 2) + pow(CatetoMaggiore, 2);
}

int main()
{
	int catetominore, catetomaggiore, ipotenusa;
	
	do
	{
		cout << "Inserire il cateto minore del triangolo rettangolo: ";
		cin >> catetominore;
	}while(catetominore <= 0);
	
	do
	{
		cout << "Inserire il cateto maggiore del triangolo rettangolo: ";
		cin >> catetomaggiore;
	}while(catetomaggiore < catetominore);
	
	do
	{
		cout << "Inserire l'ipotenusa del triangolo rettangolo: ";
		cin >> ipotenusa;
	}while(ipotenusa <= catetomaggiore);
	
	if(TernaPitagorica(catetominore, catetomaggiore, ipotenusa))
	{
		cout << "Il triangolo e' rettangolo. \n";
	}
	else
	{
		cout << "Il triangolo non e' rettangolo. \n";
	}
		
	system("pause");
	return 0;
}

