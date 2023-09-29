#include "main.h"

/**
 * bitCount - counts the number of bits in a number
 *@num: number whose bits are to be counted
 *
 * Return: number of bits counted
 */
int bitCount(unsigned long int num)
{
	/**variable to hold the num of bits counted*/
	int count;

	if (num == 0)
		return(0);
	for (count = 0; num != 0; num >>= 1)
	{
		if (num | 1)
			count++;
	}
	if (count == 2)
		return (0);

	return (count - 1);
}

/**
 * print_binary - prints binary representation of a number
 *@n:decimal number to be converted to binary
 *
 */
void print_binary(unsigned long int n)
{
	int count, i;
	unsigned long int bitMask;

	count = bitCount(n);
	/** define bitmask and left shift by number of counts*/
	bitMask = 1 << count;
	for (i = 0; i <= count; i++)
	{
		_putchar(n & bitMask ? '1' : '0');
		/**left shift value by 1*/
		n <<= 1;
	}
}
