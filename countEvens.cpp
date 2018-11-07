#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countEvens(int a[], int size)
{
	int counter;
	for (int i = 0; i < size; i++)
	{
		if (isEven(a[i]) == true)
		{
			counter++;
		}
	}
	return counter;
}
