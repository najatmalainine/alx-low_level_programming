#include <stdio.h>

/**
* main - Entry point
*
* Description: using the main function
* this program prints numbers
* Return: 0
*/
int main(void)
{
	int digit;

	while (digit <= 9)
	{
		putchar(digit + 48);
		digit++;
	}
	putchar('\n');

	return (0);
}
