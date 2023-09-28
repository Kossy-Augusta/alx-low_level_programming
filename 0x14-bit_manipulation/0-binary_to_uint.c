#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 an 1 chars
 *
 * Return: converted number or 0 if there is none 0 or 1 chars or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, total = 0, binary = 1;
	int i;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		len++;
		i++;
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total += binary;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		binary *= 2;
	}

	return (total);

}
