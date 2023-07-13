#include "main.h"

/**
 * _pow_recursion - returns the value of a int raise to the power of anothe int
 * @x:integar to be muliplied
 * @y: number of time x is to be multiplied
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
