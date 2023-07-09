#include "main.h"

/**
 * rot13 - rotatea an alphabet by 13 places
 * @a: pointer to string
 *
 * Return: a
 */
char *rot13(char *a)
{
	int i, b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabc"
		"defghijklmnopqrstuvwxyz";
	char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnop"
		"qrstuvwxyzabcdefghijklm";
	for (i = 0; a[i] != '\0'; i++)
        {
		for (b = 0; b < 52;  b++)
		{
			if (a[i] == data1[b])
			{
				a[i] = data2[b];
				break;
			}
		}
	}

	return (a);
}
