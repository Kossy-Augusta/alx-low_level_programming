#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to s
 * @accept: input
 * Return: number of bytes of segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, match;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				match = 1;
				break;
			}
		}
		if (match == 0 && count > 0)
			return (count);
	}

	return (count);
}
