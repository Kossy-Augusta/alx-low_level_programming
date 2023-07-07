#include "main.h"
#include <stdio.h>

/**
 *reverse_array - Reverses the content of an array
 *@a: Array
 *@n number of items in the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;
	
	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
