#include "main.h"
#include <stdio.h>

/**
 * lower - determines whether ascii is lower
 *
 * @c: character
 *
 * Return: 1 if true, 0 otherwise
 */

int lower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 *
 * @c: character parameter
 *
 * Return: 1 if true, 0 otherwise
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalize all words of string
 *
 * @n: input string
 *
 * Return: string
 */

char *cap_string(char *n)
{
	char *ptr = n;
	int delimit = 1;

	while (*n)
	{
		if (isDelimiter(*n))
			delimit = 1;
		else if (lower(*n) && delimit)
		{
			*n -= 32;
			delimit = 0;
		}
		else
			delimit = 0;
		n++;
	}
	return (ptr);
}
