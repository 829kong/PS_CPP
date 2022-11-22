
// 다시 풀어보자 쥰내어렵다,,,,

#include <iostream>
using namespace std;

int dp[101][10] = {};

int Solve(int n)
{
	int sum = 0;
	for (int i = 1; i < 10; ++i)
		dp[1][i] = 1;

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			//dp[i][1] = (dp[i - 1][0] == 0) ? 1 : dp[i - 1][0];
			if (j == 0)
				dp[i][0] = dp[i - 1][1];
			else if (j == 9)
				dp[i][9] = dp[i - 1][8];
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}

	for (int i = 0; i < 10; ++i)
	{
		sum = (sum + dp[n][i]) % 1000000000;
	}

	return sum;
}

int main()
{
	int n;
	cin >> n;

	cout << Solve(n) << '\n';

	return 0;
}