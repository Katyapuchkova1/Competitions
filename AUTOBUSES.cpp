﻿#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m, k, buses;
	cout << "Write the number of children" << endl;
	cin >> n;
	cout << "Write the number of sits in the bus" << endl;
	cin >> k;
	cout << "Write the number of adults in the bus" << endl;
	cin >> m;

	if (n / (k - 2) * 2 > m && n % (k - 2) == 0 || n / (k - 2) * 2 + 2 > m && n % (k - 2) != 0)

	{
		buses = 0;
	}

	else if (m - (2 * n / (k - 2)) - k + (n % (k - 2)) <= 0)

	{
		buses = n / (k - 2) + 1;
	}

	else if (m - (2 * n / (k - 2)) - k + (n % (k - 2)) % k == 0)

	{
		buses = n / (k - 2) + (m - (2 * n / (k - 2)) - k + (n % (k - 2))) / k;
	}

	else

	{
		buses = n / (k - 2) + (m - (2 * n / (k - 2)) - k + (n % (k - 2))) / k + 1;
	}


	cout << buses << endl;
	system("Pause");
	return 0;
}
