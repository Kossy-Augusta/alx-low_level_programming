#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @a: pointer to the string
 *
 * Return:  a
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		       i++;
		if (a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t' ||
 		a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' ||
		a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' || a[i - 1] == ')' || 
		a[i - 1] == '(' || a[i - 1] == '}' || 
		a[i - 1] == '{')
		       a[i] = a[i] - 32;
	       i++;
	}

	return (a);
}
