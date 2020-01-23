
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{
	int N;

	cin >> N;

	int* a = new int[N]; //big range input, which is converted, so the output can be small range
	int* keys = new int[N];

	unordered_map<int, int> mapping;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i] >> keys[i];
		mapping[keys[i]] = a[i];
	}

	for (auto x : mapping)
	{
		cout << x.first << ' ' << x.second<<endl;
	}

	delete[] a;
	delete[] keys;

    return 0;
}

