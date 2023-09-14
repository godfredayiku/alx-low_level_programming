#include "main.h"

/**
 * _isdigit - this function checks for a digit (0 through 9)
 *
 * @c: function parameter
 *
 * Return: returns 1 when successful and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
