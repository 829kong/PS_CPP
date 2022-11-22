#include <iostream>
#include <vector>
using namespace std;

int dp[1000];

int Solve(int n)
{
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 1; i <= n; ++i)
	{
		if (n == 1) return dp[1];
		if (n == 2) return dp[2];
		if (n == 3) return dp[3];
		if (dp[n] != 0) return dp[n];
		return dp[n] = Solve(n - 1) + Solve(n - 2) + Solve(n - 3);
	}
	return dp[n];
}

int main()
{
	int t, n;
	cin >> t;
	
	vector<int> v;
	
	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		v.push_back(n);
	}

	for (int i = 0; i < t; ++i)
	{
		
		cout << Solve(v[i]) << '\n';
	}

	return 0;
}