#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns len of string passed to it
 * @str: string to evaluate
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies string pointed to by src to dest
 * @dest: pointer to the bffer which string will be copied to
 * @src: ponter to string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len])
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * struct new_dog - structure containing new dog details
 * @name: pointer to dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: pointer to the new dog (success), Null on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	 _strcpy(dog->name, name);
	 _strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
