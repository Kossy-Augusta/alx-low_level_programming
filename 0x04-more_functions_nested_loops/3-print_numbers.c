#include "main.h"

/**
 * print_numbers - Prints numbers from 0 - 9
 */

void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
