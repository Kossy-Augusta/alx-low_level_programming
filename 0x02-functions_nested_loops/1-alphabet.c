#include "main.h"

/**
 * main - Prints alphabets in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}
void print_alphabet(void)
{
	char alpha = 'a';
	
	while ( alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
