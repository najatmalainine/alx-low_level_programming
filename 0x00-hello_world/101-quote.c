#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
*
* Description: using the main function
* this program prints a quote using the write function
* write(int fildes, const void *buf, size_t nbyte)
* Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
