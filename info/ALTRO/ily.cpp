#include <iostream>

using namespace std;

int somma(int a, int b)
{
	return a + b;
}


int main()
{
	int n1, n2;
	
	cout << "primo numero: ";
	cin >> n1;
	
	cout << "secondo numero: ";
	cin >> n2;
	
	int sum = somma(n1, n2);
	
	cout << sum << endl;
	
	system("pause");
	return 0;
}

