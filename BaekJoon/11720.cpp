#include <iostream>
using namespace std;

int main()
{
	int count;
	char c;
	cin >> count;
	
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> c;
		sum += c - '0';
	}
	cout << sum << endl;
}