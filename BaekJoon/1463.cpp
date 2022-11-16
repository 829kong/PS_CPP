#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001] = {};

void Solve(int n)
{

	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + 1; // 1À» »«°æ¿ì
		
		if (i % 3 == 0)
		{
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0)
		{
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
	}
	cout << dp[n] << '\n';
	
}

int main()
{
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	Solve(n);

	return 0;
}