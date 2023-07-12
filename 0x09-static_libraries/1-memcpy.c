#include "main.h"
/**
 *_memcpy - Copies memory area
 *@dest: ponter to the meory address to be copied to
 *@src: ponter to the memory address to be copied from
 *@n: number of bytes to be copied
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;


	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

