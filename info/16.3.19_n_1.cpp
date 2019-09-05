#include <iostream>

using namespace std;

int main()
{
    /*
    Scrivere un programma che, in un vettore di 10 posizioni, 
    legga 10 voti compresi tra 1 e 10. Calcolare la media dei 
    voti e visualizzarla. Dire infine quanti siano i voti 
    maggiori della media.
    */
    
    const int MAXN = 10;

    double voti[MAXN];
    double somma = 0;

    for(int i = 0; i < MAXN; i++)
    {
        do
        {
            cout << "Inserire un voto: ";
            cin >> voti[i];
        }while(voti[i] <= 0 || voti[i] > 10);
        somma += voti[i];
    }

    double media = somma / MAXN;
    int cont = 0;

    for(int i = 0; i < MAXN; i++)
    {
        if(voti[i] > media)
        {
            cont++;
        }
    }

    cout << "La media dei voti inseriti e' " << media << " e " << cont << " voti superano la media.\n";

    system("pause");
    return 0;
}

