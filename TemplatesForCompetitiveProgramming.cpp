// TemplatesForCompetitiveProgramming.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int N;
	cin >> N;

	int* a = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	int* prefix_sum = new int[N];

	prefix_sum[0] = a[0];

	for (int i = 1; i < N; i++)
	{
		prefix_sum[i] = prefix_sum[i - 1] + a[i];
	}

	int l, r;

	cin >> l >> r;

	int sum = l!=0?prefix_sum[r] - prefix_sum[l-1]:prefix_sum[r];

	cout << sum << endl;

    return 0;
}

