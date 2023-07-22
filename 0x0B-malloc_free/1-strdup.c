#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *string;
	int i, r;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	string = (char *)malloc(sizeof(char) * i);
	if (string == NULL)
		return (NULL);
	for (r = 0; r < i; r++)
	{
		string[r] = str[r];
	}

	return (string);

}

