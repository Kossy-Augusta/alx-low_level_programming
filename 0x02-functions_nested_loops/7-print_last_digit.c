#include "main.h"

/**
 * print_last_digit - Prints the value of the last
 * last digit of a number
 * @a: input integar value
 *
 * Return: last digit of a
 */

int print_last_digit(int a)
{
	int last_digit = a % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);

	return (last_digit);
}
