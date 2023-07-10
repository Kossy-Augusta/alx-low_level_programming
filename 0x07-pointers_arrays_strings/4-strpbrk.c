#include "main.h"

/**
 * _strpbrk - Searches a string
 * @s: Pointer to string to be scanned
 * @accept: The string containing the character to match
 *
 * Return: A pointer to thebyte in s that matches one byte in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}

	return (0);
}
