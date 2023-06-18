#include <stdio.h>

/**
* main - Entry point
*
* Description: using the main function
* this program prints the alphabets in reverse
* Return: 0
*/

int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');

	return (0);
}
