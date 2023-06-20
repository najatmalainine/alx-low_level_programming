#include "main.h"

/**
* print_alphabet_x10 - prints alphabets 10 times
*
* Description: using the main function
* this program prints the alphabets
* Return: 0
*/

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
