
#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int x; //testvalue
	int mask;
	int i; //index
	int res; //result
	int count = 0;

	cin >> x>>i;

	// clear all bits from lsb to i-th bit
	
	mask = ~((1 << (i + 1) - 1));
	res = x&mask;
	cout << res << endl;

	// clear all bits from msb to i-th bit

	mask = (1 << i) - 1;
	res = x&mask;
	cout << res << endl;

	// uppercase - > lowercase

	res = res | ' ';

	//lowercase - > uppercase

	res = res & '_'; 

	//check if x is power of two

	res = x && !(x && (x - 1));

	//finding the number of 1's in an integer

	while (x)
	{
		x = x&(x - 1);
		count++;

	}




    return 0;
}

