#include "main.h"

/**
 * print_diagonal - Prints daiginal line
 * @n: Number of times the diagonal will be printed
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b < a; b++)
		{
			_putchar(32);
		}

		_putchar(92);
		_putchar('\n');
	}
}
