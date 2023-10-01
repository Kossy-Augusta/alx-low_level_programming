#include "main.h"

/**
 * bitCount - conts the num, of bits in a number
 * @num: number
 *
 * Return: number of counts
 */
unsigned int bitCount(unsigned long int num)
{
	unsigned int count;

	for (count = 0; num != 0; num <<= 1)
	{
		if (num & 1)
			count++;
	}

	return (count - 1);
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whoser bit is to be returned
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count;
	unsigned long int bitMask, result;

	count = bitCount(n);
	if (index > count)
		return (-1);
	bitMask = 1 << count;
	result = n << (count - index);
	if (result & bitMask)
		return (1);

	return (0);
}
