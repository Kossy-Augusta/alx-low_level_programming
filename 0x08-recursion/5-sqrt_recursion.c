#include "main.h"

int sqrt_finder(int n, int i);

/**
 * _sqrt_recursion - returns the nayural sqrt of a number
 * @n: number whose sqrt is to be returned
 *
 * Return: Resulting sqet or -1 if n does not hav a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_finder(n, 0));
}

/**
 * sqrt_finder - returns the nayural sqrt of a number
 * @n: number whose sqrt is to be returned
 * @i: iterator
 *
 * Return: Resulting sqet or -1 if n does not hav a natural sqrt
 */
int sqrt_finder(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_finder(n, ++i));
}
