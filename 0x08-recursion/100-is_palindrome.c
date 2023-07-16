#include "main.h"

int check_length(char *s);
int check_pal(char *s, int i, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: onput string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return 1; 
	return (check_pal(s, 0, check_length(s)));
}

/**
 * check_length - checks length of a string
 * @s: input string
 *
 * Return: length of string
 */
int check_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + check_length(s + 1));
}

/**
 * check_pal - checks if a string is a palindrome
 * @s: input string
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + (len - 1)))
		return (0);

	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
