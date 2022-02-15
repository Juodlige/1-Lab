// 1LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	long long int sk;
	cin >> sk; //pradinis sk.
	int vs = 0; //vektoriaus el. sk.
	int vs2 = 0; //vektoriaus el. sk. po saknies
	long long int sum = 0;

	int sqsk;
	sqsk = (long long int)sqrt(sk);

	vector<long long int>dal; //dalikliu vektorius
	for (int i = 1; i <= sqsk; i++)
	{
		if (sk%i == 0)
		{
			dal.push_back(i);
			vs++;
			sum = sum + i;
		}
	}
	if (sqsk != sk)
	{
		if (sqsk*sqsk == sk)
		{
			dal.push_back(sqsk);
			sum = sum + sqsk;
			vs++;
		}
	}

	for (int i = vs - 1; i > 0; i--)
	{
		if (sk / dal[i] != sqsk)
		{
			dal.push_back(sk / dal[i]);
			sum = sum + sk / dal[i];
			vs2++;
		}
	}

	if (sk == 1) sum++;

	if (sum == sk)
	{
		cout << "TAIP";
	}

	else
	{
		cout << "NE";
	}
	return 0;
}
