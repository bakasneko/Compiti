#include <iostream>
#include <cmath>

using namespace std;

/*
Scrivere un programma che risolva il problema di trovare le soluzioni di un'equazione di
secondo grado. Dati, in ingresso, da tastiera, i valori a, b, c restituisca in output le soluzioni
dell'equazione
ax2+bx+c=0
nel caso in cui queste esistano.
(Usare la funzione sqrt includendo la libreria math.h)

*/

int Delta(int a, int b, int c)
{
	return b * b - 4 * a * c;
}

int main()
{
	int a, b, c;
	
	do
	{
		cout << "Inserire a: ";
		cin >> a;
	}while(a == 0);
	
	cout << endl << "Inserire b: ";
	cin >> b;
	cout << endl << "Inserire c: ";
	cin >> c;
	
	if(b == 0 && c != 0)
	{
		if(a * c < 0)
		{
			cout << endl << "x1 = " << sqrt(-c/a);
			cout << endl << "x2 = " << - sqrt(-c/a) << endl;
		}
		else
		{
			cout << endl << "Equazione impossibile" << endl;
		}		
	}
	else if(c == 0 && b != 0)
	{
		cout << endl << "x1 = 0 ";
		cout << endl << "x2 = " << -b/a << endl;
	}
	else if(b == 0 && c == 0)
	{
		cout << endl << "x1, x2 = 0 " << endl;
	}
	else
	{
		int delta = Delta(a, b, c);
		if(delta < 0)
		{
			cout << "Equazione impossibile. " << endl;
		}
		else if (delta == 0)
		{
			double x = -b / 2.0 * a;
			cout << "x1 = x2 = " << x << endl;
		}
		else
		{
			double x1 = (-b + sqrt(delta))/ 2.0 * a;
			double x2 = (-b - sqrt(delta))/ 2.0 * a;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}
	
	system("pause");
	return 0;
}

