#include <stdio.h>
#include <stdlib.h>

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
		printf("Error\n");
	for (i = 1; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
