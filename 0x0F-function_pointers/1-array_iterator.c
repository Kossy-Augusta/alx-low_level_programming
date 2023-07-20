#include "function_pointers.h"

/**
 * array_iterator - prints each array element on a new  line
 * @array: Array
 * @size: array size
 * @action: pointer to fucyion
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL && action == NULL)
	{
		return;
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
