#include "main.h"
/**
 * _islower - checks if a charcter is lower case
 * @c: Character value
 *
 * Return: 1 if value is lowercas,
 * 0 if value is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
