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
	int digit;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');

	return (0);
}
