#include <iostream>
using namespace std;

int dp[1001][10] = {};

void N_of_i_Add(int n)
{
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i; j < 10; ++j)
		{
			dp[n][i] = (dp[n][i] + dp[n - 1][j] ) % 10007;
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);

	int n;
	int sum = 0;
	cin >> n;

	for (int i = 0; i < 10; ++i)
		dp[1][i] = 1;

	for (int i = 2; i <= n; ++i)
		N_of_i_Add(i);

	for (int i = 0; i < 10; ++i)
		sum = (sum + dp[n][i] ) % 10007;
	
	cout << sum << '\n';
}