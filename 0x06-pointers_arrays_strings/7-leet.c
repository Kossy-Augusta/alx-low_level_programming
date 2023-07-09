#include "main.h"

/**
 *leet - encodes a string into 1337
 *@a: pointer
 *
 * return: a
 */
char *leet(char *a)
{
	int i, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a[i] == s1[b])
			{
				a[i] = s2[b];
			}
		}
	}

	return (a);
}
