// 1LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

long long int L, R;
vector<long long int>pirm;


int main()
{
	cin >> L >> R;

	for (int i = L; i <= R; i++)
	{
		if (i)
		pirm.push_back(i);
		
	}

	return 0;
}
