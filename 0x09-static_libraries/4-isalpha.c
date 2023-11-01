#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 *
 *@c: parameter for the function
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
