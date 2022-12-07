#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001] = {}; // N��° �ܱ��� ������ ���� �� �ִ� �������� �ִ��
int arr[10001] = {}; // N��° ���� ��

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