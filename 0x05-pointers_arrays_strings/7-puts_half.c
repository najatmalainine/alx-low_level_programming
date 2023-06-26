#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */


void puts_half(char *str)
{

	int length = 0;
	int i, halfLength, n;
	/* Calculate the length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}

	halfLength = length / 2;
	n = (length - 1) / 2;

	/* Print the second half of the string*/
	if (length % 2 == 0)
		for (i = halfLength; i < length; i++)
		{
			_putchar(str[i]);

		}

	else if (length % 2 != 0)
		for (i = length - n; i < length; i++)
		{
			_putchar(str[i]);

		}

	putchar('\n');
}
