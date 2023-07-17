#include <stdio.h>
#include "dog.h"


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */


int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		++count;

	return (count);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(_strlen(name) + 1);

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);

	new_dog->age = age;

	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);

}
