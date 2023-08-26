#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long temp1 = 0, temp2 = 1, current;
	int i;

	for (i = 1; i <= 98; i++)
	{
		current = temp1 + temp2;
		temp1 = temp2;
		temp2 = current;
		printf("%lu", current);
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
