#include "main.h"

/**
 * _memset - fills memory with constant bytes
 *@s: Pointer to memory area
 *@b: value to be filled
 *@n: number of bytes of memory to be filled
 *
 *Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
