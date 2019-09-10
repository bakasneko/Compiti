#include <iostream>

using namespace std;

/*
Scrivere un programma che legga una sequenza di numeri interi qualsiasi inseriti da tastiera
(i numeri possono essere anche negativi o nulli). La sequenza di numeri è chiusa dal numero
0, cioè l'inserimento termina quando viene dato in input il numero 0. Inoltre, ogni volta che
viene inserito un numero controlla se sia >10 e in questo caso calcola il triplo del numero e
lo scrive a video, mentre se è <10 continua solo nell’inserimento del numero successivo
senza dare a video alcun output. 
*/

int main()
{
	int num;
	
	cout << "Inserire un numero: ";
	cin >> num;
	
	while(num != 0)
	{
		cout << "Inserire un numero: ";
		cin >> num;
		
		if(num > 10)
		{
			cout << "->" << num * 3 << endl << endl;
		}
	}
	
	system("pause");
	return 0;
}

