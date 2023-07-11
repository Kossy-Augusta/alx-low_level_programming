#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s:  pointer to a pointer
 * @to: value s is set to
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
