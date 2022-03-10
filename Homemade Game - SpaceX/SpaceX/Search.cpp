#include "Search.h"

void bubbleSort(char* a[10], int n)
{
	char tmp[20];

	for (int i=0; i<n-1; i++)
	{	
		for (int j=n; j>i; j--)
		{
			if (strcmp(a[j-1],a[j]) > 0)
			{
				strcpy(tmp, a[j-1]);
				strcpy(a[j-1], a[j]);			
				strcpy(a[j], tmp);			
			}
		}
	}
}

bool binarySearch(char *array[10], int size, char* value)
{
	if (size == 0) 
		return false;

	else
	{
		int i, j, k;
		i = 0;
		j = size-1;

		while (i < j)
		{
			k = (i+j) / 2;

			if ((strcmp(value,array[k])<0))
				j = k-1;
			else if ((strcmp(value,array[k+1])>=0))
				i = k+1;
			else
				i = j = k;
		}
		return (!strcmp(value,array[i])) ? true : false;
	}
}