#include "main.h"

/**
 * rot13 - encode string using rot13
 * @str: string to encode
 * Return: encoded string
 */

void *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'a' + (str[i] - 'a' + 13) % 26;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'A' + (str[i] - 'A' + 13) % 26;
		}
		i++;
	}
	return (str);
}
