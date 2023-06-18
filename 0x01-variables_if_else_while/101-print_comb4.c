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
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
			if (i != j && i != k && j != k)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(k + 48);
				if (i != 7)
				{
				putchar(',');
				putchar(' ');
				}
			}	}
		}
	}
	putchar('\n');
	return (0);
}
