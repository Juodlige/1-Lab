// 3LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long long int dbd(unsigned long long int a, unsigned long long int b);

int main()
{
	int usk, M[100];
	unsigned long long int a, b, sk;
	cin >> usk; //uzkl sk.

	for (int i = 0; i < usk; i++)

	{
		cin >> a >> b;
		M[i] = dbd(a, b);
	}

	for (int i = 0; i < usk; i++)

	{
		cout << M[i];
		if (i + 1 != usk) cout << endl;
	}

	return 0;
}

long long int dbd(unsigned long long int a, unsigned long long int b)
{
	//cout << a << " " << b << endl;
	if (a == 0)
	{
		return b;
	}
	return dbd(b%a, a);
}