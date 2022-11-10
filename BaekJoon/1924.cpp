#include <iostream>
using namespace std;

int main()
{
	int month, day;
	int monthArr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> month >> day;
	int monthAdd = 0;

	for (int i = 0; i < month - 1; i++)
	{

		monthAdd += monthArr[i];
	}

	int findWeek = day + monthAdd;

	if (findWeek % 7 == 0)
		cout << "SUN" << endl;
	else if (findWeek % 7 == 1)
		cout << "MON" << endl;
	else if (findWeek % 7 == 2)
		cout << "TUE" << endl;
	else if (findWeek % 7 == 3)
		cout << "WED" << endl;
	else if (findWeek % 7 == 4)
		cout << "THU" << endl;
	else if (findWeek % 7 == 5)
		cout << "FRI" << endl;
	else if (findWeek % 7 == 6)
		cout << "SAT" << endl;

	
}