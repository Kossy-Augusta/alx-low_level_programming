#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued fibonacci
 * terms followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	unsigned long int b, c, next_num, sum;

	c = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		next_num = b + c;
		b = c;
		c = next_num;
	}

	printf("%lu\n", sum);

	return (0);
}

