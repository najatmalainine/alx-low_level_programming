#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */


int _strcmp(char *s1, char *s2)
{
	/* while neither strings have ended*/
	while (*s1 != '\0' || *s2 != '\0')
	{
		/* if element in arr1 in arr2 are diff, return difference*/
		if (*s1 != *s2)
			return (*s1 - *s2);
		/* iterate index*/
		s1++;
		s2++;
	}
	return (0);
}
