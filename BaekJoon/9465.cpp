
//처음에 틀림
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int buf[2][100010] = {};
//int dp[2][100010] = {};
//
//int Solve(int n)
//{
//	int result = 0;
//
//	dp[0][0] = buf[0][0];
//	dp[1][0] = buf[1][0];
//	dp[0][1] = buf[1][0] + buf[0][1];
//	dp[1][1] = buf[0][0] + buf[1][1];
//
//	for (int i = 2; i <= n; ++i)
//	{
//		dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + buf[0][i];
//		dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + buf[1][i];
//	}
//
//	return result = max(dp[0][n], dp[1][n]);
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//
//	int t;
//	cin >> t;
//	for (int count = 0; count < t; ++count)
//	{
//		int n;
//		cin >> n;
//		for (int i = 0; i < 2; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cin >> buf[i][j];
//			}
//		}
//		if (n == 1)
//			cout << 0 << endl;
//		else
//		cout << Solve(n) << '\n';
//	}
//
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;

int buf[2][100010] = {};
int dp[2][100010] = {};

int Solve(int n)
{
	int result = 0;

	dp[0][1] = buf[0][1];
	dp[1][1] = buf[1][1];

	for (int i = 2; i <= n; ++i)
	{
		dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + buf[0][i];
		dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + buf[1][i];
	}

	return result = max(dp[0][n], dp[1][n]);
}

int main()
{
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int count = 0; count < t; ++count)
	{
		int n;
		cin >> n;
		for (int i = 0; i < 2; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cin >> buf[i][j];
			}
		}
		cout << Solve(n) << '\n';
	}

	return 0;
}

