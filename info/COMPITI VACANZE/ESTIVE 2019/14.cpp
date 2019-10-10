#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	
	do
	{
		cout << "Inserire A: ";
		cin >> a;
	} while (a <= 0);
	
	do
	{
		cout << "Inserire B: ";
		cin >> b;
	} while (b <= 0);
	
	int count = 0;
	
	if(a < b)
	{
		while(b % a == 0)
		{
			b /= a;
			count++;
		}
	}
	else if(a > b)
	{
		while(a % b == 0)
		{
			a /= b;
			count++;
		}
	}
	else
	{
		count = 1;
	}
	
	cout << "il valore della molteplicita' e' di " << count << endl;
	
	system("pause");
	return 0;
}
