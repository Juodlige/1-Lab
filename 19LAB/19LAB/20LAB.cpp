// 19LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool IsPrime(int x);

int main()
{
	int n, m, a, b, c, d;

	cin >> n >> m;

	vector<int> prime;
	vector<int> primesum;

	for (int i = n; i <= m; i++)
	{
		if (IsPrime(i) == true)
		{
			prime.push_back(i);
		}
	}

	int x = prime.size();
	int temp;

	for (int i = 0; i < x; i++)
	{
		temp = prime[i];
		d = temp % 10;
		temp = temp / 10;
		c = temp % 10;
		temp = temp / 10;
		b = temp % 10;
		temp = temp / 10;
		a = temp % 10;

		if (a != 0)
		{
			if (a + b == d + c)
			{
				primesum.push_back(prime[i]);
			}
		}
	}

	x = primesum.size();

	for (int i = 0; i < x; i++)
	{
		cout << primesum[i];
		if (i + 1 != x)
		{
			cout << " ";
		}
	}
	if (x == 0)
	{
		cout << x;
	}

    return 0;
}

bool IsPrime(int x)
{
	bool isit = true;
	int n = (int)sqrt(x);
	for (int i = 2; i <= n; i++)
	{
		if (x % i == 0) {
			isit = false;
			break;
		}
	}
	return isit;
}