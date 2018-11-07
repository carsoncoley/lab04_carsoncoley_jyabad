#include "arrayFuncs.h"
#include <iostream>
using namespace std;

int sumOfArray(int a[], int size)
{
	int total = 0;
	for (int i =0; i < size; i++)
	{
		total+= a[i];
	}
	return total;
}
