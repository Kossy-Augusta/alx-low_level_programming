#include "main.h"
#include <stdlib.h>
/**
 * str_conicat - allocates memory for ne concatenated string
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	newstring = (char *)malloc(sizeof(char) * (i + j + 1));

	if (newstring == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		newstring[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		newstring[i] = s2[j];
		i++, j++;
	}
	newstring[i] = '\0';

	return (newstring);
}
