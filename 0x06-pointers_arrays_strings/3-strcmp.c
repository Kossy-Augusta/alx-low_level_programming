#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -15 if s2 > s1, 15 if s2 < s1, 0 if s2 == s1
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; (s1[a] != '\0') && (s2[a] != '\0'); a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}

	return (0);
}
