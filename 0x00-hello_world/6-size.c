#include <stdio.h>

/**
 * main - prints the value of the size of data types
 *
 * Return: 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	prinf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	prinntf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("SIze of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
