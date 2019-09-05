#include <iostream>

using namespace std;

int main()
{
	//riordinare un array
		//exchange sort
	
	int MXN = 10;
	int ciao[MXN];
	
	for(int i = 0; i < MXN; i++)
	{
		cout << "Inserire un numero: ";
		cin >> ciao[i];
	}
	
	cout << endl;
	
	for(int i = 0; i < MXN - 1; i++)
	{
		for(int j = i+1; j < MXN; j++)
		{
			if(ciao[i] < ciao[j])
			{
				int temp = ciao[i];
				ciao[i] = ciao[j];
				ciao[j] = temp;	
			}
		}
	}
	
	for(int i = 0; i < MXN; i++)
	{
		cout << ciao[i] << endl;
	}
	
	system("pause");
	return 0;
}

