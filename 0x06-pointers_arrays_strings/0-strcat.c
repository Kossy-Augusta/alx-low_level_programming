#include "main.h"

/**
 * _strcat -  Concatenates string pointed to by src to dest
 * @dest: destination string
 * @src: string that will be appended to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int a;

	i = 0;
	while (dest[i])
		i++;
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i++] = src[a];
	}
	dest[i] = '\0';

	return (dest);
}
