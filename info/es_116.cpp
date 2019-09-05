#include <iostream>

using namespace std;

int main()
{
	int a, b;
	
	cout << "Inserire il valore di A: ";
	cin >> a;
	
	do
	{
		cout << "Inserire il valore di B: ";
		cin >> b;
	}while(b <= a);
	
	for(int i = b - (b % 2); i >= a; i -= 2)
	{
		cout << i << endl;
	}
	
	system("pause");
	return 0;
}

