#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002] = {};
int dp[1002] = {};

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = 1; i <= n; ++i)
	{
		dp[i] = arr[i];

		for (int j = 1; j <= i; ++j)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[j] + arr[i], dp[i]);
			}
		}

		ans = max(ans, dp[i]);
	}

	cout << ans << "\n";

	// 5 1 2 3 10
	return 0;
}