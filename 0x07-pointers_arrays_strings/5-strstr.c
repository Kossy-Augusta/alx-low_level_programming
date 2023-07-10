#include "main.h"

/**
 * _strstr - Locate a substring
 * @haystack: Pointer to C string to be scanned
 * @needle: pointer to string to be searched with-in haystack string
 *
 * Return: Pointer to the first occurance of string in needle in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		for (j = 0; j < 1 && needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
		}
		i++;
	}

	return (0);
}
