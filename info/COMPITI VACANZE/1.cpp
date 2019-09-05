#include <iostream>

using namespace std;

/*
scrivere il programma che dati in input da tastiera due numeri interi a e b assegni a c: 
- a+b se a>0 o se b>5
- a-b negli altri  casi
visualizzare il valore di c
*/

int main()
{
	int a; 
	int b;
	int c;
	
	cout << "Inserire due numeri." << endl;
	cout << "A: ";
	cin >> a;
	cout << endl << "B:";
	cin >> b;
	
	if(a > 0 || b > 5)
	{
		c = a + b;
	}
	else
	{
		c = a - b;
	}
	
	cout << c << endl;
		
	system("pause");
	return 0;
}

