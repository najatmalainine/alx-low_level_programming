#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalize first letter of each word
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	 /* Flag to indicate whether the next character should be capitalized*/

	int capitalize = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		/* Check if the current character is a separator*/
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
			s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
			s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			capitalize = 1; /* Set the flag to capitalize the next character*/
		}
		/* Check if the current character is an alphabet (a-z, A-Z)*/
		else if (isalpha(s[i]))
		{
			/* Capitalize the current character if the flag is set*/
			if (capitalize)
			{
				s[i] = toupper(s[i]);
				capitalize = 0; /* Reset the flag*/
			}
			else
			{
				s[i] = tolower(s[i]); /* Convert to lowercase if the flag is not set*/
			}
		}
		else
		{
			capitalize = 0; /* Reset the flag for non-alphabet characters*/
		}
	}

	return (s);
}
