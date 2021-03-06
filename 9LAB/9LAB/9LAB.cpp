// 9LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void QSort(vector<long long int> &M, long long int min, long long int max);

long long int Split(vector<long long int> &M, long long int min, long long int max);

int main()
{
	long long int n, t;
	long long int sum = 0;
	vector<long long int>pac;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> t;
		pac.push_back(t);
		//cout << "Irasomas vektorius " << i << endl;
	}
	
	QSort(pac, 0, n - 1);

	for (int i = 0; i < n; i++) 
	{
		sum = sum + (pac[i] * (n - i - 1));
	}

	cout << sum;
	// Vektorius, pivot
	// funkcija(Vektorius, pivot)

    return 0;
}

void QSort(vector<long long int> &M, long long int min, long long int max)
{

	//VektoriusMaz(nariai < pivot)
	//	pivot = naujas;
	//funkcija(VektoriusMaz, pivot)

	//VektoriusDid(nariai > pivot)
	//	pivot = naujas;
	//funkcija(VektoriusDid, pivot)

	if (min < max) 
	{
		//cout << "Kreipiamasi i QSort " << min << " " << max << endl;
		long long int pivotI = Split(M, min, max); //pivot naujas
		QSort(M, min, pivotI-1); //funkcija (vektorius, nariai iki pivot)
		QSort(M, pivotI, max); //funkcija (vektorius, nariai nuo pivot)
	}
}

long long int Split(vector<long long int> &M, long long int min, long long int max)
{
	//cout << "Kreipiamasi i Split " << min << " " << max << endl;
	long long int pivotI = min + (max - min) / 2; //sios puses pivot vieta
	long long int pivot = M[pivotI]; //sios puses pivot verte
	long long int i = min, j = max, temp; //naudojami vektoriaus nariai nuo, iki ir laikinas

	while (i <= j)
	{
		//cout << "Pirmas while " << i << " " << j << endl;
		while (M[i]<pivot) //iesko nario kuris yra ne savo vietoje nuo kaires, pagal pivot
		{
			i++;
			//cout << "Antras while " << i << " " << j << endl;
		}
		while (M[j]>pivot) //iesko nario kuris yra ne savo vietoje nuo desines, pagal pivot
		{
			j--;
			//cout << "Trecias while " << i << " " << j << endl;
		}
		if (i<=j) //sukeicia tuos narius vietomis
		{
			temp = M[i];
			M[i] = M[j];
			M[j] = temp;
			i++;
			j--;
			//cout << "Ifas" << endl;
		}
		return i; //paskutine pakeista vieta
	}





	return i;
}