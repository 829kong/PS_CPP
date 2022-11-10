#include <iostream>
using namespace std;

int main()
{
	char c[100];
	int count = 0;
	cin >> c;
	for (int i = 0; i < sizeof(c); i++)
	{
		if (!c[i])
			break;
		cout << c[i];
		count++;
		if (count == 10)
		{
			count = 0;
			cout << endl;
		}
	}
}