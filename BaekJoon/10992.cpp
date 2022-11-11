#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		if (i == n - 1)
		{
			for (int j = 0; j < 2 * i + 1; ++j)
				cout << "*";
			break;
		}
		for (int j = n; j > i + 1; --j)
			cout << "-";
		for (int j = 0; j < 2 * i + 1; ++j)
		{
			if (j == 0)
			{
				cout << "*";
			}

			if (j == 2 * i - 1)
			{
				cout << "*";
				break;
			}
			if(i != 0)
				cout << "-";

		}
		
		cout << "\n";
	}
}