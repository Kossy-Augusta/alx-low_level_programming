#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the stdout
 * @value: Character to be written to the stdout
 *
 * Return: 1 on Success, -1 on error
 */

int _putchar(char value)
{
        return (write(1, &value, 1));
}
