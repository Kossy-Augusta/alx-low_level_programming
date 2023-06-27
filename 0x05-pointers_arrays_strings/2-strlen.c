#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string whose length will be returned
 *
 * Return: Length of the string @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
