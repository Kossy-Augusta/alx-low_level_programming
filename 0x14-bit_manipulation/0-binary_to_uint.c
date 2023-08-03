#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of to be converted
 *
 * Return: converted num if success and 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result = 2 * result + (b[i] - '0');
	}

	return (result);
}
