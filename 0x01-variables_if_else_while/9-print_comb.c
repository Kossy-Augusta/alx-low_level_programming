#include <stdio.h>

/**
 * main - Program that prints single digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');		}
	}

	putchar('\n');
	return (0);
}

