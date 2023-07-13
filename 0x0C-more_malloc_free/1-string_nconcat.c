#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
		n = len2;

	dest = malloc((len1 + n + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		dest[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		dest[len1 + j] = s2[j];

	dest[len1 + j] = '\0';

	return (dest);
}