#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long int temp1 = 0, temp2 = 1, current;
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
		else
		{
			printf("\n");
		}
	}

	return (0);
}
