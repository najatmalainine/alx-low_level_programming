#include "main.h"

/**
* print alphabet - prints alphabets
*
* Description: using the main function
* this program prints the alphabets
* Return: 0
*/

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');

}
