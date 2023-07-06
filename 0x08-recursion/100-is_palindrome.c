#include "main.h"
#include <string.h>


/**
 * is_pali_helper - compare head and tail indices for match
 * @i: index starting from left of string
 * @j: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */


int is_pali_helper(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (is_pali_helper(s, i + 1, j - 1));
}


/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0, end = strlen(s) - 1;

	return (is_pali_helper(s, start, end));
}

