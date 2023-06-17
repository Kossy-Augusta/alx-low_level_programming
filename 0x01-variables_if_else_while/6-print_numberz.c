#include <stdio.h>

/**
 * main - program that prints base 10 numbers
 *
 * Return: 0 (Success)
 */

int main (void)
{
        int num = 0;

        for(; num < 10; num++)
                putchar(num + '0');
        putchar('\n');

        return (0);
}
