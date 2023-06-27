#include "main.h"

/**
 * swap_int - Swaps the value of two integars
 * @a: Firt value
 * @b: Second value
 */

void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}
