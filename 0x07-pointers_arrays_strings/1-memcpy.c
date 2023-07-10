#include "main.h"

/**
 * _memcpy
 * @dest: ponter to the meory address to be copied to
 * @src: ponter to the memory address to be copied from
 * n: number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	
	return (0);
}
