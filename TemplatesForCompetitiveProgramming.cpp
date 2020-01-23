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

	sort(a, a + N);

	int x;
	cin >> x;
	int l = 0;
	int r = N - 1;
	int mid;
	while (l < r)
	{
		mid = (l + r + 1) / 2;
		if (x >= a[mid])
		{
			l = mid;
		}
		else
		{
			r = mid - 1;
		}
	}

	cout << l << endl;

    return 0;
}

