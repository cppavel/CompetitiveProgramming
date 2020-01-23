
#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int get_index(int* a, int N, int element)
{
	int l = 0;
	int r = N - 1;
	int mid;
	while (l < r)
	{
		mid = (l + r + 1) / 2;
		if (element >= a[mid])
		{
			l = mid;
		}
		else
		{
			r = mid - 1;
		}
	}
	return l;
}


int main()
{
	int N;

	cin >> N;

	int* a = new int[N]; //big range input, which is converted, so the output can be small range

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	sort(a, a + N);

	for (int i = 0; i < N; i++)
	{
		cout << a[i]<<' '<<get_index(a, N, a[i])<<' '; //check that it works properly
	}

	delete[] a;

    return 0;
}

