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
	int b;

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	if (b > a)
		return (-15);
	else if (b < a)
		return (15);
	else if (b == a)
		return (0);

	return (0);
}
