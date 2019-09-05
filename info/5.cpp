#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che calcoli l'area di un trapezio, 
	note le misure delle basi e dell'altezza
	*/
	
	double Base_M, base_m, altezza, area;
	
	cout << "Inserire la base maggiore del trapezio: ";
	cin >> Base_M;
	
	do
	{
		cout << "Inserire la base minore del trapezio: ";
		cin >> base_m;
	}while(base_m >= Base_M);
	
	cout << "Inserire l'altezza del trapezio:";
	cin >> altezza;
	
	area = ((Base_M + base_m)* altezza)/2;
	
	cout << "L'area del trapezio e': " << area << "." << endl;
		
	system("pause");
	return 0;
}

