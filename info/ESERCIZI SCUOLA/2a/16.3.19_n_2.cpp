#include <iostream>

using namespace std;

int main()
{
	/*
	Compattazione di un array. scrivere un programma che legga n 
	numeri interi e li memorizzi. il numero n viene inserito dall'
	utente ed è positivo e non maggiore di 20. il programma deve 
	generare un secondo vettore che compatti i numeri contenuti 
	nel primo. in particolare: ogni numero uguale a 0 presente 
	nel primo array non deve comparire nel secondo. 
	il programma deve visualizzare il contenuto del 
	primo vettore e, nella riga successiva, il secondo vettore
	*/
	
	int n;

    do
    {
        cout << "Inserire il valore di n: ";
        cin >> n;
    }while(n <= 0 || n > 20);

    int vett[n];
    int vettcomp[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Inserire un numero: ";
        cin >> vett[i];
    }
    
    int j = 0;
    for(int i = 0; i < n; i++)
    {
        if(vett[i] != 0)
        {
            vettcomp[j] = vett[i];
            j++;
        }
    }
    
    cout << "Vett: ";
    for(int i = 0; i < n; i++)
    {
        cout << vett[i] << " ";
    }
    
    cout << endl << "VettCompat: "; 

    for(int i = 0; i < j; i++)
    {
        cout << vettcomp[i] << " ";
    }
    
    cout << endl;

	system("pause");
	return 0;
}

