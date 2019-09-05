#include <iostream>

using namespace std;

int main()
{
	int a;
	
	cout << "Inserire un numero: ";
	cin >> a;
	
	switch(a)
	{
		case a % 2 == 0:
			cout << "ciao :D";
		break;
		default:
			cout << "ciaone";
	}
	
	system("pause");
	return 0;
}

