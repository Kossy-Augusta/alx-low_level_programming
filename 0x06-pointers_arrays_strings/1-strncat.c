#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: string unto which strings will be appended
 * @src: string to be appended to dest
 * @n: number os bytes to be apended to dest
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	i= 0;
	while (dest[i] != '\0' )
		i++;
	for (a = 0; (a < n) && (src[a] != '\0'); a++)
	{
		dest[i] = src[a];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
