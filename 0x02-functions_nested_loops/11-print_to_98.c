#include "main.h"

/**
 * print_to_98 - prints natural  numbers fron n to 98
 * @n: Starting point Number
 *
 */

void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		if (n >= 10 && n != 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		if (n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
        }
	for (; n >= 98; n--)
	{
		if (n >= 100)
		{
			_putchar((n / 10) / 10 + '0');
			_putchar((n / 10) / 10 + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		if (n < 100 && n != 98)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
