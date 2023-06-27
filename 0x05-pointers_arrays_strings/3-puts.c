#include "main.h"

/**
 * _puts - Prints a string
 * @str: string to be printed to the stdout
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}
