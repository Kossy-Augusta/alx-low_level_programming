#include "main.h"

/**
 * print_line -  Draws a straight line 
 * @n: Number of underscores to ne printed
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		_putchar(95);
	}

	_putchar('\n');
}
