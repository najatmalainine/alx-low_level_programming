#include <stdio.h>

/**
* main - Entry point
*
* Description: using the main function
* this program prints the alphabets
* Return: 0
*/
int main(void)
{
	char alph = 'a';

	while (alph < 'z')
	{
	if ((alph != 'e') && (alph != 'q'))
	{
		putchar(alph);
	}
	alph++;
	}
	putchar('\n');

	return (0);
}
