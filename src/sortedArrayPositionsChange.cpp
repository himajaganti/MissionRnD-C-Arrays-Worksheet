/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>
#include<stddef.h>
void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j, k, s, temp;
	if ((Arr == NULL) || (len<0))
	{
		return NULL;
	}
	else
	{

		for (k = 0, s = len - 1; k<len / 2, s >= 0; k++, s--)
		{
			if (Arr[k]>Arr[k + 1])
			{
				i = k;
				break;
			}
			if (Arr[s] < Arr[s - 1])
			{
				j = s;
				break;
			}

		}
		temp = Arr[i];
		Arr[i] = Arr[s];
		Arr[s] = temp;

		return Arr;
	}

}