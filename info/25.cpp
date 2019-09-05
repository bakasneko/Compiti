#include <iostream>

using namespace std;

int main()
{
	/*
	Scrivere un algoritmo che, dato il consumo di acqua di un utente, 
	espresso in m3, calcoli l'importo della bolletta, sapendo che 
	ogni bolletta comprende una quota fissa di 20 euro e una quota
	variabile di 2,50 euro/m3 per i primi 100 metri cubi d'acqua, di 
	euro 4,00/m3 per i metri cubi in eccesso.
	*/
	
	int consumo_m3;
	const int quota_f = 20;
	double importo;
	const double quota_v1 = 2.5, quota_v2 = 4.0;
	
	do
	{
		cout << "Inserire il consumo di acqua (m3): ";
		cin >> consumo_m3;
	}while(consumo_m3 < 0);
	
	if(consumo_m3 <= 100)
	{
		importo = quota_f + (consumo_m3 * quota_v1);
	}
	else
	{
		importo = quota_f + (100 * quota_v1) + ((consumo_m3 - 100) * quota_v2);
	}
	
	cout << "L'importo totale della bolletta e' " << importo << endl;	
	
	system("pause");
	return 0;
}

