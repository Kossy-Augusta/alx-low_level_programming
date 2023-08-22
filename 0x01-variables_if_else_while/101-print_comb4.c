#include <stdio.h>

/**
 * main - Enry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		b = a + 1;
		for (; b < 9; b++)
		{
			c = b + 1;
			for (; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
