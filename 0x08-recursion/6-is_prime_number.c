#include "main.h"

int prime_checker (int n, int i);

/**
 * is _prime_number - checks if number is a prime number
 * @n: number to be checked
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_checker(n, n - 1));
}

/**
 * is _prime_number - checks if number is a prime number
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i  == 0 && i > 0)
		return (0);
	return (prime_checker(n, --i));
}
