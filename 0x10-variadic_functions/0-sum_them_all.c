#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all it's parameters
 * @n: first parameter and len of remaining parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);


}
