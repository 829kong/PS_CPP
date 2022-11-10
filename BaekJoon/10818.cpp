//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	int min, max;
//	int* numArr = new int[n];
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> numArr[i];
//	}
//
//	min = numArr[0];
//	max = numArr[0];
//
//	for (int i = 0; i < n; ++i)
//	{
//		if (min > numArr[i])
//			min = numArr[i];
//		if (max < numArr[i])
//			max = numArr[i];
//	}
//	cout << min << " " << max << endl;
//
//}

// 배열 없이

#include <iostream>
using namespace std;

int main()
{
	int n;
	int num;
	cin >> n;

	int max = -1000000;
	int min = 1000000;

	for (int i = 0; i < n; ++i)
	{
		cin >> num;

		if (num > max)
			max = num;
		if (num < min)
			min = num;
	}

	cout << min << " " << max << endl;
}
