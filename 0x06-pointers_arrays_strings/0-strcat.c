#include "main.h"

/**
 * _strcat - COncatenates two strings
 * @dest: First string
 * @src: Second string
 *
 * Returns: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
		a++;

	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
