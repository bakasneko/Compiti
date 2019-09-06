#include <iostream>

using namespace std;

/*
Scrivere il programma che dati in input da tastiera due numeri reali A e B, calcoli C=A*B e
visualizzi sullo schermo il risultato accompagnato dal messaggio:
? “A e B sono concordi”, nel caso in cui C>0;
? “A e B sono discordi”, nel caso in cui C<0;
? “Almeno uno dei due numeri è nullo” se A e/o B sono uguali a zero. 
*/

int main()
{
	float a;
	float b;
	float c;
	
	cout << "Inserire due numeri: " << endl;
	cout << "A: ";
	cin >> a;
	cout << endl << "B: ";
	cin >> b;
	
	c = a * b;
	
	if(c > 0) 
	{
		cout << "A e B sono concordi. " << endl;
	}
	else if(c < 0)
	{
		cout << "A e B sono discordi. " << endl;
	}
	else
	{
		cout << "Almeno uno dei due numeri e' nullo. " << endl;
	}
		
	system("pause");
	return 0;
}

