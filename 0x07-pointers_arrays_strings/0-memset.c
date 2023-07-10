#include "main.h"

/**
 * _memset - fills memory with constsnt bytes
 *@s: Pointer to memory area 
 *@b: value to be filled
 *@n numbrr of bytes
 *
 *Return: s
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
