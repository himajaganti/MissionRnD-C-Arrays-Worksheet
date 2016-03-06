/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/
#include<stddef.h>
#include <stdio.h>
#include <malloc.h>

#include<stddef.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{

	int p, i, flag = 0, flag1 = 0, s, j;
	p = len;
	j = len + 1;


	if ((Arr == NULL) || (len<0))
	{
		return NULL;
	}

	else
	{

		for (i = len - 1; i >= 0; i--)
		{

			if (Arr[0]<Arr[len - 1])
			{
				if (num<Arr[i])
				{
					Arr[p] = Arr[i];
					p--;
					if (p == 0){ flag = 1; }
				}
				else if (num>Arr[i])
				{
					Arr[p] = num; s = p;
				}
			}

			else if (Arr[0]>Arr[len - 1])
			{
				if (num<Arr[i])
				{
					Arr[p] = num; s = p;
				}

				else if (num>Arr[i])
				{

					Arr[p] = Arr[i];
					p--;
					if (p == 0){ flag1 = 1; }
				}
			}
		}
		if (flag == 1)
		{
			Arr[0] = num; s = 0;
		}
		if (flag1 == 1)
		{
			Arr[0] = num; s = 0;
		}
	}

	return Arr;
}