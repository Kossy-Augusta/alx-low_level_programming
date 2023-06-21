#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @a - integar value
 *
 * Return: Always 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		a *= -1;
	}
	else if (a == 0)
	{
		a = 0;
	}
	else if (a < 0)
	{
		a *= 1;
	}
	return (a);
}
