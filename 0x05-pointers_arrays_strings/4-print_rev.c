#include "main.h"

/**
 * print_rev - Prints strring in reverse
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a -= 1; a >= 0; a--)
		_putchar(s[a]);

	_putchar('\n');
}
