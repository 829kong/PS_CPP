#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		if (n > 100000)
			break;
		cout << i + 1 << "\n";
	}
}