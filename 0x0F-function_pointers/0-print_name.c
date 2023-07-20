#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: Pointer to a char
 * @f: Pointer to  a function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
