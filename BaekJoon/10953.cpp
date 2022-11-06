#include <iostream>
using namespace std;

int main()
{
	int count;
	int a, b;
	char c;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> a >> c >> b;
		cout << a + b << endl;
	}
}