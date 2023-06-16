#include <stdio.h>
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints the size of various types
* Return: 0
*/
int main(void)
{
	printf("Size of a char: %ld\n", sizeof(char));
	printf("Size of an int: %ld\n", sizeof(int));
	printf("Size of a long int: %ld\n", sizeof(long));
	printf("Size of a long long int: %ld\n", sizeof(long long));
	printf("Size of a float: %ld\n", sizeof(float));
	return (0);
}
