#include <iostream>
#include <vector>
using namespace std;

int dp[1001] = {};

int Solve(int n)
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	for (int i = 1; i <= n; ++i)
	{
		if (n == 1) return dp[1];
		if (n == 2) return dp[2];
		if (dp[n] != 0) return dp[n];
		return dp[n] = (Solve(n - 1) + Solve(n - 2))%10007;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	Solve(n);
	cout << dp[n] << '\n';

	return 0;
}