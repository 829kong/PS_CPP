#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	for (int i = n; i > 0; i--)
	{
		if (n > 100000)
			break;
		cout << i << "\n";
	}
}