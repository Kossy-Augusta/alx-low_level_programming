#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: value of input
 *
 * Return: 1 if number is positve, 0 if number is zero,
 * -1 if number is negative
 */

int print_sign(int n)
{
        if (n > 0)
        {
                _putchar('+');
                return (1);
        }
        else if (n == 0)
        {
                _putchar('0');
                return (0);
        }
        else if (n < 0)
        {
                _putchar('-');
                return (-1);
        }

        return (0);
}

