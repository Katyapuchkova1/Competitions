﻿// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()

{
	int A, B, N, M, P;
	int K = 0;
	int Z = 0;
	cout << "Write the number of jacks" << endl;
	cin >> N;
	cout << "Write the nymber of devices" << endl;
	cin >> M;
	cout << "Write the cost of 2-stratcher" << endl;
	cin >> A;
	cout << "Write the cots of 5-stratcher" << endl;
	cin >> B;

	if ((A * 4) <= B)

	{
		Z = M - N;
	}

	else if (((M - N) % 4) * A <= B)

	{
		K = (M - N) / 4;
		Z = (M - N) % 4;
	}

	else if (((M - N) % 4) * A > B && ((M - N) % 4) != 0)

	{
		K = (M - N) / 4 + 1;
	}

	else if (((M - N) % 4) == 0)

	{
		K = (M - N) / 4;
	}

	P = Z * A + K * B;

	cout << P << endl;
	system("Pause");
	return 0;
}
