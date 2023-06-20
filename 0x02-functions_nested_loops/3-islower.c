#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower returns 1 if lowercase, 0 if not
* Description: using the main function
* this program prints the alphabets
* Return: 0
*/

int _islower(int c)
{


	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
