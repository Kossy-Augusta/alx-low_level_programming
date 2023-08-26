#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued fibonacci
 * terms followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long temp1 = 0, temp2 = 1, sum = 0, current;

	do {
		current = temp1 + temp2;
		temp1 = temp2;
		temp2 = current;
		if (!(current % 2))
		{
			sum += current;
		}
	} while ((temp1 + temp2) < 4000000);
	printf("%lu\n", sum);

	return (0);
}
