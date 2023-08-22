#include <stdio.h>

/**
 * myatoi - converts string to inteagr
 * @str: string
 *
 * Return: 0 on failure, integar on success
 */
int myatoi(char *str)
{
	int i = 0, result = 0, sign = 1, flag = 0;
/** Chheck for whitespce*/
	while (str[i] == ' ')
		i++;
/**Check for sign of the first num*/
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			flag = 1;
		}
	}
	if (flag == 0)
		return (0);
	return (sign * result);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of rguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i  < argc; i++)
	{
		result = result * myatoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
