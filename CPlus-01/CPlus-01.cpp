#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	cout << "X" << "\t";
	for (int k = 0;k <= 10;k++)
	{
		cout << k << "\t";
	}
	cout << endl;
	for (int i = 0; i <= 10; i++)
	{
		cout << i << "\t";
		for (int j = 0;j <= 10;j++)
		{
			cout << i * j << "\t";
		}

		cout << endl;
	}
	return 0;
}
