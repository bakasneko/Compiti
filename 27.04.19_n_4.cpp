#include <iostream>

using namespace std;

/*
Scrivere una funzione isPuntoSuRetta che ricevuto come parametri 
i coefficienti m e q di una retta y = mx + q e le coordinate X 
e Y di un punto, restituisca true se il punto appartiene alla 
retta, false altrimenti. Provare la funzione con un apposito 
programma.
*/

bool PuntoSuRetta(int m, int q, int x, int y)
{
	return y == m * x + q;
}

int main()
{
	int m, q, x, y;
	
	cout << "Inserire la m della retta: ";
	cin >> m;
	
	cout << "Inserire la q della retta: ";
	cin >> q;
	
	cout << "Inserire la x del punto: ";
	cin >> x;
	
	cout << "Inserire la y del punto: ";
	cin >> y;
	
	if(PuntoSuRetta(m, q, x, y))
	{
		cout << "Il punto di coordinate (" << x << ", " << y << ") appartiene alla retta y = " << m << "x + " << q << ".\n";
	}
	else
	{
		cout << "Il punto di coordinate (" << x << ", " << y << ") non appartiene alla retta y = " << m << "x + " << q << ".\n";
	}
	
	system("pause");
	return 0;
}

