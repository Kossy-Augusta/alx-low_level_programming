#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a first input
 * @b: second input
 *
 * Return: differnce of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * int op_mul - returns multiplication of a and b
 * @a: first input
 * @b: second input
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the division of two num
 * @a: the first numb
 * @b: the second numb
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the div betwn two numbers
 * @a: The first num
 * @b: the second numb
 *
 * Return: the remainder of the div of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
