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
	int n = 0;
	char ch = 'a';

	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
