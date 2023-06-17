#include <stdio.h>

/**
 *main - Program that prints alphabets in reverse
 *
 *Return: 0 (Success)
 */

int main(void)
{
        char alpha = 'z';

        while (alpha >= 'a')
        {
                putchar(alpha);
                alpha--;
        }
        putchar('\n');

        return (0);
}

