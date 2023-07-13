#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number whose factorial is to be found
 *
 * Return: factorial of the number is n>0 and -1 if n<0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
