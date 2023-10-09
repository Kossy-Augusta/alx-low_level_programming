#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonal of square matrix
 * @a: Pointer to array
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, n;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 += a[j * size + i];
			}
		}
	}
	n = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == n)
			{
				sum2 += a[i * size + (size - i - 1)];
			}
		}
		n--;
	}
	printf("%d, %d\n", sum1, sum2);
}
