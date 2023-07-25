#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_string - checks string to ensure they are digits only
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_string(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}

	return (1);
}

/**
 * main - Program that adds positive numbers
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, strToInt, sum = 0;

	i = 1;
	while (i < argc)
	{
		if (check_string(argv[i]))
		{
			/**convert string to int*/
			strToInt = atoi(argv[i]);
			sum = sum + strToInt;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
