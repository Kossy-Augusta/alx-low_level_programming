#include "main.h"

/**
 * _strchr - locates first occurance of a character in a string
 * @s: Pointer to the first occurance of the character
 * @c: Character to be located
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (0);
}
