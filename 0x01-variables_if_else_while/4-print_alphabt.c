#include <stdio.h>

/**
 * main - program that prints all alphabets except 'q' and 'e'
 *
 * Return - 0 (Success)
 */
int main(void)
{
        char alpha = 'a';

        for (; alpha <= 'z'; alpha++)
        {
                if (alpha != 'q' && alpha != 'e')
                        putchar(alpha);
        }
        putchar('\n');
        return (0);

}
