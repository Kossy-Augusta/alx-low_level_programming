#include <stdio.h>

/**
 * main - Program that prints hexadecimal numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');

	return (0);
}
