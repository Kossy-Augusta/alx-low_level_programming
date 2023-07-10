#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to s
 * @accept: input
 * Return: number of bytes of segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept [j + 1] == '\0')
				return (n);
		}

		if (n == 0)
			break;
		i++;
	}

	return (n);
}
