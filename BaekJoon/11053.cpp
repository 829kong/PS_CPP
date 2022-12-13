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
	int sum = 0;

	for (int i = 1; i <= n; ++i)
		cin >> arr[i];


	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;

		for (int j = 1; j <= i; j++)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		sum = max(sum, dp[i]);
	}

	cout << sum << endl;

	return 0;
}