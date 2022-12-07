#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = {}; // N번째 잔까지 왔을때 마실 수 있는 포도주의 최대양
int arr[10001] = {}; // N번째 잔의 양

int main()
{
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;

	// Init
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = max(max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]), dp[i - 1]);
	}

	cout << dp[n] << endl;

	return 0;
}