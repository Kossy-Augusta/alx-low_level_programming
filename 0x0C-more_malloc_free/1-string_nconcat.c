#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	if (n < len2)
		str = malloc(sizeof(char) * len1 + n + 1);
	str = malloc(sizeof(char) * len1 + len2 + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (n < len2 && i < (len1 + n))
	{
		str[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';

	return (str);
}
