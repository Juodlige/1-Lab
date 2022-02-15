// 2LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

long long int dbd(unsigned long long int a, unsigned long long int b);

int main()
{
	unsigned long long int a, b, sk;
	cin >> a >> b;

	sk = dbd(a, b);

	a = a / sk;
	b = b / sk;

	cout << a << " " << b;

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