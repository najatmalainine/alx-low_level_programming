#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet(void): prints the alphabet, in lowercase
 * Return: nothing
 */

void print_alphabet(void);



/**
* print_alphabet_x10(void): prints 10 times the alphabet
* Return: 0
*/

void print_alphabet_x10(void);


/**
* int _islower(int c): checks for lowercase character
* Return: 0
*/

int _islower(int c);


/**
* int _isalpha(int c): checks for alphabetic character
* Return: 0
*/

int _isalpha(int c);


/**
 * print_sign(int n) - prints the sign of a number
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n);


/**
 * _abs(int) - computes the absolute value of an integer
 * Returns 0
 */


int _abs(int);


/**
 * print_last_digit(int) - prints the last digit
 * Returns the last digit
 */



int print_last_digit(int);



/**
 * jack_bauer(void) - prints every minute of the day
 * Returns: 0
 */

void jack_bauer(void);



/**
 * times_table(void) - prints the 9 times table
 * Returns: 0
 */

void times_table(void);


/**
 * int add(int, int) - adds two digits
 * Returns: 0
 */

int add(int, int);



/**
 * print_to_98 - prints to 98
 * @n: number to check
 * Return:0
 */

void print_to_98(int n);



/**
 * print_times_table - prints the n times table
 *
 * Return: 0
 */

void print_times_table(int n);


#endif
