#include "main.h" 

/**
 *_isupper - Checks for uppercase character
 *@c: Value of character entered
 *
 *Return: 1 if c is uppercase, 0 if c is otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
